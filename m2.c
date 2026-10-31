#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float m1, m2, m3, average;
};

int main() {
    struct Student s[100];
    int n, i;
    float highest;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter roll, name and three marks: ");
        scanf("%d %49s %f %f %f",
              &s[i].roll, s[i].name,
              &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].average = (s[i].m1 + s[i].m2 + s[i].m3) / 3;
    }

    highest = s[0].average;

    for (i = 1; i < n; i++) {
        if (s[i].average > highest)
            highest = s[i].average;
    }

    printf("\nStudent(s) with highest average:\n");

    for (i = 0; i < n; i++) {
        if (s[i].average == highest) {
            printf("Roll: %d, Name: %s, Average: %.2f\n",
                   s[i].roll, s[i].name, s[i].average);
        }
    }

    return 0;
}