#include <stdio.h>
#include "student.h"

void searchStudent(int roll) {
    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            printf("Student Found:\n");
            printf("Roll: %d | Name: %s | Marks: %.2f\n",
                   students[i].roll, students[i].name, students[i].marks);
            return;
        }
    }
    printf("Student with Roll No %d not found.\n", roll);
}
