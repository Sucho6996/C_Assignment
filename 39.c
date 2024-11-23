//Question : Write a program to input and print array elements using pointer.

#include <stdio.h>

int main() {
    int n, i;
    int *ptr;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    int arr[n];

   
    ptr = arr;

    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr + i));  
    }

    
    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));  
    }

    printf("\n");

    return 0;
}
