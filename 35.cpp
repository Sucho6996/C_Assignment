/*
Write a C program to find power of any number using recursion
*/

#include <stdio.h>

// Function to calculate power using recursion
double power(double base, int exponent) {
    if (exponent == 0) {
        return 1; // Base case: any number raised to 0 is 1
    } else if (exponent > 0) {
        return base * power(base, exponent - 1); // Recursive case for positive exponent
    } else {
        return 1 / power(base, -exponent); // Handle negative exponent
    }
}

// Main function
int main() {
    double base;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    double result = power(base, exponent);
    printf("%.2lf raised to the power of %d is %.2lf\n", base, exponent, result);

    return 0;
}
