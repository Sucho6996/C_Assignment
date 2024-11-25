/*Write a program to compare two strings using pointers*/

#include <stdio.h>

int compareStrings(const char *str1, const char *str2) {
    // Loop through both strings using pointers
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return 0;  // Strings are not equal
        }
        str1++;
        str2++;
    }

    // Check if both strings are of the same length
    if (*str1 == '\0' && *str2 == '\0') {
        return 1;  // Strings are equal
    }

    return 0;  // Strings are not equal, one string is longer
}

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    char str3[] = "Hello, C!";

	printf("str1->%s str2->%s str3->%s",str1,str2,str3);
    if (compareStrings(str1, str2)) {
        printf("\nstr1 and str2 are equal.\n");
    } else {
        printf("str1 and str2 are not equal.\n");
    }

    if (compareStrings(str1, str3)) {
        printf("str1 and str3 are equal.\n");
    } else {
        printf("str1 and str3 are not equal.\n");
    }

    return 0;
}
