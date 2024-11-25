/*Write a program to add two 2 X 2 matrix using pointers.*/
#include <stdio.h>

int main() {
    // Declare two 2x2 matrices and the result matrix
    int matrix1[2][2], matrix2[2][2], result[2][2];
    int *ptr1, *ptr2, *ptr_result;

    // Set pointers to point to the first element of the matrices
    ptr1 = &matrix1[0][0];
    ptr2 = &matrix2[0][0];
    ptr_result = &result[0][0];

    // Input elements for the first matrix
    printf("Enter elements of the first 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", (ptr1 + i * 2 + j));  // Accessing matrix using pointer arithmetic
        }
    }

    // Input elements for the second matrix
    printf("Enter elements of the second 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", (ptr2 + i * 2 + j));  // Accessing matrix using pointer arithmetic
        }
    }

    // Adding the two matrices and storing the result
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            *(ptr_result + i * 2 + j) = *(ptr1 + i * 2 + j) + *(ptr2 + i * 2 + j);  // Pointer addition
        }
    }

    // Display the result
    printf("The sum of the two matrices is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", *(ptr_result + i * 2 + j));  // Accessing the result matrix using pointer
        }
        printf("\n");
    }

    return 0;
}
