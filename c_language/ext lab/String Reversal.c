#include<stdio.h>
// Function to reverse the string
void reverseString(char str[]) {
    int i, length = 0;

    // Calculate length manually
    while (str[length] != '\0') {
        length++;
    }

    // Swap characters from start and end
    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
int main() {
    char str[100];

    // Input string from user
    printf("Enter a string: ");
    scanf("%s", str);  // Note: this won't take spaces

    // Call the reverse function
    reverseString(str);

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
