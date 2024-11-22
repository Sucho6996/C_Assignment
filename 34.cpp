/*
Write a C program to check whether a number is prime, Armstrong or perfect number using functions
*/

#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // Not prime
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0; // Divisible, not prime
    }
    return 1; // Prime
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num, sum = 0, digits = 0;
    // Count the number of digits
    while (originalNum != 0) {
        digits++;
        originalNum /= 10;
    }
    originalNum = num;
    // Calculate the sum of the power of digits
    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, digits);
        originalNum /= 10;
    }
    return sum == num; // Return true if sum equals the original number
}

// Function to check if a number is a perfect number
int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) sum += i; // Add divisors
    }
    return sum == num; // Perfect number if sum equals the number
}

// Main function
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (isPrime(num)) {
        printf("%d is a Prime number.\n", num);
    } else {
        printf("%d is not a Prime number.\n", num);
    }

    // Check if the number is an Armstrong number
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    // Check if the number is a perfect number
    if (isPerfect(num)) {
        printf("%d is a Perfect number.\n", num);
    } else {
        printf("%d is not a Perfect number.\n", num);
    }

    return 0;
}


