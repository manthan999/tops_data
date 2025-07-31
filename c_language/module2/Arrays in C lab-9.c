#include <stdio.h>

int main() {
    int i, j, sum = 0, maximum = 0;
   
    int a[5];
    printf("Enter 5 integers for 1D array:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
        sum += a[i];
        if (maximum < a[i]) {
            maximum = a[i];
        }
    }

    printf("\n1D Array Elements:\n");
    for(i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    printf("Sum of 1D array = %d\n", sum);
    printf("Maximum value in 1D array = %d\n", maximum);

    
    int b[3][3];
    int sum2D = 0;

    printf("\nEnter elements for 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
            sum2D += b[i][j];
        }
    }

    printf("\n2D Array (3x3 Matrix):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("Sum of all elements in 2D array = %d\n", sum2D);
}
