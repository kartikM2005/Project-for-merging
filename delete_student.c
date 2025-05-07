#include <stdio.h>
#include "student.h"

void deleteStudent(int roll) {
    int found = 0;

    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            found = 1;
            printf("Student with Roll No %d deleted successfully.\n", roll);
            break;
        }
    }

    if (!found)
        printf("Student with Roll No %d not found.\n", roll);
}
