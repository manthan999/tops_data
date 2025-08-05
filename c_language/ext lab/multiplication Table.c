#include<stdio.h>
main() {
    int i,num, range;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter  a range: ");
    scanf("%d", &range);

    for(i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}
