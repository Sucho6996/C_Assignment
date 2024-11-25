/*C Program to copy contents of one file to another file*/

#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;

    // Open the source file in read mode
    sourceFile = fopen("example.txt", "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL) {
        printf("Error opening destination file.\n");
        fclose(sourceFile);  // Don't forget to close the source file before returning
        return 1;
    }

    // Read each character from the source file and write it to the destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("File copied successfully.\n");

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
