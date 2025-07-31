#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *filename = "myfile.txt";
    const char *text = "Hello, this is a test string!\n";

    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error opening file for writing");
        return EXIT_FAILURE;
    }

    fprintf(fp, "%s", text);

    fclose(fp);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file for reading");
        return EXIT_FAILURE;
    }

    char buffer[256];
    printf("Contents of '%s':\n", filename);
    while (fgets(buffer, sizeof(buffer), fp)) {
        printf("%s", buffer);
    }

    fclose(fp);

    return EXIT_SUCCESS;
}

