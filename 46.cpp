/*Write a program to find length of string using pointers*/
#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int length = 0;

    // Taking input from the user
    printf("Enter a string: ");
    gets(str);

    // Pointer initialization
    ptr = str;

    // Traverse the string until the null-terminator is found
    while (*ptr != '\0') {
        length++;
        ptr++;  // Move to the next character
    }

    // Output the length of the string
    printf("Length of the string is: %d\n", length);

    return 0;
}
