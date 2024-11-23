// Question : Write a program to find the sum of all the elements of an array using pointers. 

#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    int *ptr;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    int arr[n];

    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    ptr = arr;

    
    for (i = 0; i < n; i++) {
        sum += *ptr; 
        ptr++;       
    }

   
    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}
