#include <stdio.h>

typedef struct {
    int day, month, year;
} Date;

typedef struct {
    int roll;
    char name[50];
    float cgpa;
    Date dob;
} Student;

void displayStudent(Student *s) {
    printf("\nRoll Number: %d", s->roll);
    printf("\nName: %s", s->name);
    printf("\nCGPA: %.2f", s->cgpa);
    printf("\nDate of Birth: %02d/%02d/%04d",
           s->dob.day, s->dob.month, s->dob.year);

    if (s->cgpa >= 8.5)
        printf("\nScholarship: Eligible\n");
    else
        printf("\nScholarship: Not Eligible\n");
}

int main() {
    Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter roll, name and CGPA: ");
        scanf("%d %49s %f",
              &s[i].roll, s[i].name, &s[i].cgpa);

        printf("Enter DOB (day month year): ");
        scanf("%d %d %d",
              &s[i].dob.day,
              &s[i].dob.month,
              &s[i].dob.year);
    }

    printf("\n--- Student Records ---\n");

    for (i = 0; i < n; i++) {
        displayStudent(&s[i]);
    }

    return 0;
}