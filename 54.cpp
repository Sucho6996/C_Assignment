/*C Program to merge contents of two files into a third file*/

#include <stdio.h>

int main() {
    FILE *file1, *file2, *file3;
    char ch;

    // Open the first file in read mode
    file1 = fopen("example.txt", "r");
    if (file1 == NULL) {
        printf("Could not open file1.txt\n");
        return 1;
    }

    // Open the second file in read mode
    file2 = fopen("destination.txt", "r");
    if (file2 == NULL) {
        printf("Could not open file2.txt\n");
        fclose(file1);
        return 1;
    }

    // Open the third file in write mode (creates or overwrites)
    file3 = fopen("merged_file.txt", "w");
    if (file3 == NULL) {
        printf("Could not open merged_file.txt\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    // Copy contents of the first file to the third file
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file3);
    }

    // Copy contents of the second file to the third file
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, file3);
    }

    printf("Files have been merged successfully into merged_file.txt\n");

    // Close all the files
    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}
