//Question : Write a program to swap two arrays using pointers.
#include <stdio.h>

void swapArrays(int *arr1, int *arr2, int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        temp = *(arr1 + i);    // Store the value of arr1[i] in temp
        *(arr1 + i) = *(arr2 + i);  // Copy the value of arr2[i] to arr1[i]
        *(arr2 + i) = temp;    // Assign the value of temp to arr2[i]
    }
}

int main() {
    int n;

    // Input the size of the arrays
    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);

    // Declare two arrays
    int arr1[n], arr2[n];

    // Input elements for the first array
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input elements for the second array
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Print the arrays before swapping
    printf("\nBefore swapping:\n");
    printf("First array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nSecond array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Swap the arrays
    swapArrays(arr1, arr2, n);

    // Print the arrays after swapping
    printf("\nAfter swapping:\n");
    printf("First array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nSecond array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
