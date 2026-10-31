#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float m1, m2, m3;
    char grade;
};

void displayStudent(struct Student s) {
    printf("\nRoll: %d", s.roll);
    printf("\nName: %s", s.name);
    printf("\nGrade: %c\n", s.grade);
}

float totalMarks(struct Student s) {
    return s.m1 + s.m2 + s.m3;
}

void updateGrade(struct Student *s, char newGrade) {
    s->grade = newGrade;
}

int main() {
    struct Student s;

    printf("Enter roll number and name: ");
    scanf("%d %49s", &s.roll, s.name);

    printf("Enter three subject marks: ");
    scanf("%f %f %f", &s.m1, &s.m2, &s.m3);

    printf("Enter grade: ");
    scanf(" %c", &s.grade);

    printf("\nTotal Marks: %.2f", totalMarks(s));

    printf("\nBefore updating:");
    displayStudent(s);

    updateGrade(&s, 'A');

    printf("\nAfter updating grade:");
    displayStudent(s);

    return 0;
}