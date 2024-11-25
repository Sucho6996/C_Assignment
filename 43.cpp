/*Write a program to search an element in array using pointers.*/
#include <stdio.h>

int main() 
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int *ptr = arr; // Pointer to the first element of the array
    int searchElement, found = 0;
    printf("Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t",arr[i]);
        }

    // Ask the user for the element to search
    printf("\nEnter the element to search: ");
    scanf("%d", &searchElement);

    // Search for the element using pointer
    for (int i = 0; i < size; i++) {
        if (*(ptr + i) == searchElement) { // Dereferencing pointer
            printf("Element %d found at index %d\n", searchElement, i);
            found = 1;
            break;
        }
    }

    // If the element is not found
    if (!found) {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}
