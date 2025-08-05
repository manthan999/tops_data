#include<stdio.h>
// Recursive function to calculate factorial
int factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}
// Iterative function to calculate factorial
int factorial_iterative(int n) {
	int i;
    int fact = 1;
    	for(i = 1; i <= n; i++) {
        	fact *= i;
    }
    return fact;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int rec_result = factorial_recursive(num);
        int iter_result = factorial_iterative(num);

        printf("\nFactorial of %d using recursion = %d\n", num, rec_result);
        printf("Factorial of %d using iteration = %d\n", num, iter_result);
    }
    return 0;
}
