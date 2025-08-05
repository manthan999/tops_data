#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char sentence[200], word[50], longest[50];
    int i = 0, j = 0, word_count = 0, max_length = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {
        if (isalnum(sentence[i])) {
            word[j++] = sentence[i];
        } else {
            if (j > 0) {
                word[j] = '\0';
                word_count++;
                if (j > max_length) {
                    max_length = j;
                    strcpy(longest, word);
                }
                j = 0;
            }
        }
        i++;
    }
    // For the last word if sentence does not end with space
    if (j > 0) {
        word[j] = '\0';
        word_count++;
        if (j > max_length) {
            strcpy(longest, word);
        }
    }

    printf("\nTotal Words: %d\n", word_count);
    printf("Longest Word: %s\n", longest);

    return 0;
}
