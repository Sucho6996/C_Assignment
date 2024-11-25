/*Write a program to multiply two 2 X 2 matrix using pointers*/
#include <stdio.h>

int main() {
    int A[2][2], B[2][2], C[2][2];
    int *pA = &A[0][0];  // Pointer to the first element of matrix A
    int *pB = &B[0][0];  // Pointer to the first element of matrix B
    int *pC = &C[0][0];  // Pointer to the first element of matrix C

    // Input elements for matrix A
    printf("Enter the elements of matrix A (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", pA++);
        }
    }

    // Input elements for matrix B
    printf("Enter the elements of matrix B (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", pB++);
        }
    }

    // Matrix multiplication (C = A * B)
    pA = &A[0][0];  // Reset pointer to the start of matrix A
    pB = &B[0][0];  // Reset pointer to the start of matrix B
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            *(pC + i * 2 + j) = 0; // Initialize the result matrix
            for (int k = 0; k < 2; k++) {
                *(pC + i * 2 + j) += *(pA + i * 2 + k) * *(pB + k * 2 + j);
            }
        }
    }

    // Display the result matrix
    printf("Result matrix C (A * B):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", *(pC + i * 2 + j));
        }
        printf("\n");
    }

    return 0;
}
