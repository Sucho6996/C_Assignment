#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    // Input the coefficients a, b, c
    printf("Enter the coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b*b - 4*a*c;

    // Check the nature of roots based on the discriminant
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        // One real root (repeated)
        root1 = root2 = -b / (2 * a);
        printf("The roots are real and the same.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else {
        // Complex (imaginary) roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex and imaginary.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
