#include<stdio.h>
main() {
    int arr[10], i,j, max, min, temp;
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for(i = 1; i < 10; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    printf("Maximum value = %d\n", max);
    printf("Minimum value = %d\n", min);


    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 10; j++) {
            if(arr[i] > arr[j]) {
                // Swap
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array in ascending order:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
}
