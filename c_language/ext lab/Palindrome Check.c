#include<stdio.h>
#include<string.h>
// Function to check if a number is palindrome
int isNumberPalindrome(int num) {
    int original = num, reversed = 0, digit;

    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}
// Function to check if a string is palindrome
int isStringPalindrome(char str[]) {
    int i, len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i])
            return 0;
    }

    return 1;
}
int main() {
    int number;
    char str[100];

    // Number palindrome check
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isNumberPalindrome(number))
        printf("%d is a palindrome number.\n", number);
    else
        printf("%d is not a palindrome number.\n", number);

    // String palindrome check
    printf("Enter a string: ");
    scanf("%s", str);
    if (isStringPalindrome(str))
        printf("\"%s\" is a palindrome string.\n", str);
    else
        printf("\"%s\" is not a palindrome string.\n", str);
    return 0;
}
