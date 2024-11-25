/*C Program to print contents of file*/

#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    // Open the file in read mode
    file = fopen("example.txt", "r");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    // Read and print the content of the file character by character
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file after reading
    fclose(file);

    return 0;
}
