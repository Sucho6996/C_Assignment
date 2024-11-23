// Question : Write a program to copy one array to another using pointer. 

#include <stdio.h>

int main() {
    int n, i;
    int *sourcePtr, *destPtr;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    int source[n], destination[n];

    
    sourcePtr = source;
    destPtr = destination;

    
    printf("Enter the elements of the source array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", (sourcePtr + i)); 
    }

   
    for (i = 0; i < n; i++) {
        *(destPtr + i) = *(sourcePtr + i); 
    }

    
    printf("The elements of the destination array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(destPtr + i));
    }

    printf("\n");

    return 0;
}
