/*Write a program to concatenate two strings using pointers*/

#include <stdio.h>

void concatenateStrings(char *str1, char *str2) {
    // Move the pointer 'str1' to the end of the first string
    while (*str1 != '\0') {
        str1++;  // Increment the pointer to the next character
    }

    // Now, copy the characters of str2 to the end of str1
    while (*str2 != '\0') {
        *str1 = *str2;  // Copy the character from str2 to str1
        str1++;          // Move the pointer in str1
        str2++;          // Move the pointer in str2
    }

    //  add the null terminator at the end of the concatenated string
    *str1 = '\0';
}

int main() {
    char str1[100], str2[50];

    // Input two strings
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    
    // Concatenate the strings using pointers
    concatenateStrings(str1, str2);

    // Print the concatenated result
    printf("Concatenated string: %s\n", str1);

    return 0;
}
