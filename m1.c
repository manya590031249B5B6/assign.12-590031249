#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float m1, m2, m3;
};

int main() {
    struct Student s;
    float total, average;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%49s", s.name);

    printf("Enter marks in three subjects: ");
    scanf("%f %f %f", &s.m1, &s.m2, &s.m3);

    total = s.m1 + s.m2 + s.m3;
    average = total / 3;

    printf("\nRoll Number: %d", s.roll);
    printf("\nName: %s", s.name);
    printf("\nTotal Marks: %.2f", total);
    printf("\nAverage Marks: %.2f", average);

    if (average >= 90)
        printf("\nGrade: A");
    else if (average >= 75)
        printf("\nGrade: B");
    else if (average >= 60)
        printf("\nGrade: C");
    else if (average >= 40)
        printf("\nGrade: D");
    else
        printf("\nGrade: F");

    return 0;
}





