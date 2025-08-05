#include <stdio.h>
main() {
    int a, b;
    int choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Largest number: %d\n", a);
        choice = 2;
    } else if (b > a) {
        printf("Largest number: %d\n", b);
        choice = 1;
    } else {
        printf("Both numbers are equal.\n");
        choice = 0;
    }

    switch (choice) {
        case 1:
            printf("Smallest number: %d\n", a);
            break;
        case 2:
            printf("Smallest number: %d\n", b);
            break;
    }
}
