/*. C program to delete a file*/
#include <stdio.h>

int main() {
    const char *filename = "destination.txt";  // Specify the file you want to delete

    // Attempt to delete the file
    if (remove(filename) == 0) {
        printf("File %s deleted successfully.\n", filename);
    } else {
        printf("Error occured in deleting the file %s.\n", filename);
    }

    return 0;
}
