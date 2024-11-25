/*C Program to count number of lines in a file*/

#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int line_count = 1;

    // Open the file in read mode
    file = fopen("example.txt", "r");

    if (file == NULL) {
        // Check if the file was opened successfully
        printf("Error opening file.\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            line_count++;  // Increment the line count whenever a newline character is encountered
        }
    }

    // Close the file
    fclose(file);

    printf("Number of lines in the file: %d\n", line_count);

    return 0;
}
