#include<stdio.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, special = 0;
    int i = 0;

    // Get input string
    printf("Enter a string: ");
    gets(str);  // Use fgets in modern code to avoid overflow

    // Loop through each character
    while (str[i] != '\0') {
        char ch = str[i];

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        // Check for consonants
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
        // Check for digits
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        // Everything else is a special character
        else {
            special++;
        }
        i++;
    }
    // Output results
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nDigits: %d", digits);
    printf("\nSpecial characters: %d", special);
    
    return 0;
}
