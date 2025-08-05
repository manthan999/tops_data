#include<stdio.h>
// Recursive function to calculate Nth Fibonacci number
int fibonacci_recursive(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}
// Iterative function to calculate Nth Fibonacci number
int fibonacci_iterative(int n) {
	int i;
    int a = 0, b = 1, c;
    if (n == 0) 
	return 0;
    if (n == 1) 
	return 1;
    	for(i = 2; i <= n; i++) {
        	c = a + b;
        	a = b;
        	b = c;
    }
    return b;
}
int main() {
    int n;
    printf("Enter value of N: ");
    scanf("%d", &n);

    // Print Nth Fibonacci using both methods
    printf("Nth Fibonacci (Recursive): %d\n", fibonacci_recursive(n));
    printf("Nth Fibonacci (Iterative): %d\n", fibonacci_iterative(n));
    return 0;
}
