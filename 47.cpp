/*Write a program to copy one string to another using pointer.*/
#include <stdio.h>

int main() {
    char source[] = "Suchorit Saha";  // Source string
    char destination[50];  // Destination string (large enough to hold the copied string)
    
    // Pointer to source and destination
    char *src = source;
    char *dest = destination;
    
    // Copying each character from source to destination using pointers
    while (*src != '\0') {
        *dest = *src;  // Copy character from source to destination
        src++;         // Move the source pointer to the next character
        dest++;        // Move the destination pointer to the next position
    }
    
    *dest = '\0';  // Null-terminate the destination string
    
    // Print both strings to verify the copy
    printf("Source String: %s\n", source);
    printf("Destination String: %s\n", destination);
    
    return 0;
}
