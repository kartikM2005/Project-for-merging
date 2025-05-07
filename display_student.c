#include <stdio.h>
#include "student.h"

void viewStudents() {
    if (count == 0) {
        printf("No student records to display.\n");
        return;
    }

    printf("\n--- Student List ---\n");
    for (int i = 0; i < count; i++) {
        printf("%d. Roll: %d | Name: %s | Marks: %.2f\n",
               i + 1, students[i].roll, students[i].name, students[i].marks);
    }
}
