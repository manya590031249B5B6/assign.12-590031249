#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joining;
};

int main() {
    struct Employee e[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nEnter employee name, ID and salary: ");
        scanf("%49s %d %f",
              e[i].name, &e[i].id, &e[i].salary);

        printf("Enter joining date (day month year): ");
        scanf("%d %d %d",
              &e[i].joining.day,
              &e[i].joining.month,
              &e[i].joining.year);
    }

    printf("\n--- Employee Details ---\n");

    for (i = 0; i < 3; i++) {
        printf("\nName: %s", e[i].name);
        printf("\nID: %d", e[i].id);
        printf("\nSalary: %.2f", e[i].salary);
        printf("\nDate of Joining: %02d/%02d/%04d\n",
               e[i].joining.day,
               e[i].joining.month,
               e[i].joining.year);
    }

    return 0;
}