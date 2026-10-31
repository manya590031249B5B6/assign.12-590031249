#include <stdio.h>

union Number {
    int i;
    float f;
};

int main() {
    union Number n[3];
    int i;

    printf("Enter three integers: ");

    for (i = 0; i < 3; i++) {
        scanf("%d", &n[i].i);
    }

    printf("\nInteger values:\n");

    for (i = 0; i < 3; i++) {
        printf("%d ", n[i].i);
    }

    n[1].f = 5.5f;

    printf("\n\nSecond element after overwrite: %.2f\n",
           n[1].f);

    return 0;
}