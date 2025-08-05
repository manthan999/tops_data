#include<stdio.h>
main() {
    int num, digit, sum = 0, reverse = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num; 

  
    while (temp != 0) {
        digit = temp % 10;       
        sum += digit;             
        reverse = reverse * 10 + digit; 
        temp = temp / 10;         
    }
    printf("Sum of digits = %d\n", sum);
    printf("Reversed number = %d\n", reverse);
}
