#include<stdio.h>
main() {
    int i, j,k;
    int A[3][3], B[3][3], Sum[3][3], Product[3][3];
    
    // Input for Matrix A
    printf("Enter elements of 3x3 Matrix A:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input for Matrix B
    printf("Enter elements of 3x3 Matrix B:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix Addition
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Matrix Multiplication
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            Product[i][j] = 0;
            for(k = 0; k < 3; k++) {
                Product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display Sum
    printf("\nMatrix Addition Result:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", Sum[i][j]);
        }
        printf("\n");
    }

    // Display Product
    printf("\nMatrix Multiplication Result:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", Product[i][j]);
        }
        printf("\n");
    }
}
