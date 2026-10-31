#include <stdio.h>

typedef struct {
    int roll;
    char name[50];
    float cgpa;
} Student;

int main() {
    Student s[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nEnter roll number, name and CGPA: ");
        scanf("%d %49s %f",
              &s[i].roll, s[i].name, &s[i].cgpa);
    }

    printf("\n--- Student Details ---\n");

    for (i = 0; i < 3; i++) {
        printf("\nRoll: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nCGPA: %.2f\n", s[i].cgpa);
    }

    return 0;
}