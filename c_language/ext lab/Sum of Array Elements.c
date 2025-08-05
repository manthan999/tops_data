#include<stdio.h>
main() {
    int n, i;
    float sum = 0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];

    // Input N elements
    for(i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    // Calculate average
    average = sum / n;

    // Output results
    printf("Sum of elements = %.2f\n", sum);
    printf("Average = %.2f\n", average);
}
