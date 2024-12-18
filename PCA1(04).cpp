#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void convertToBinary(long decimalValue) {
    int binary[32];
    int index = 0;

    if (decimalValue == 0) {
        printf("0");
        return;
    }

    while (decimalValue > 0) {
        binary[index] = (decimalValue % 2) + '0';
        decimalValue /= 2;
        index++;
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", binary[i]);
    }
}

void convertNumber(char *input, int inputBase, int outputBase) {
    long decimalValue = strtol(input, NULL, inputBase);

    printf("Converted to base %d: ", outputBase);

	switch(outputBase){
		case(2):
			convertToBinary(decimalValue);
			break;
		case(8):
			printf("%lo", decimalValue);
			break;
		case(10):
			printf("%ld", decimalValue);
			break;
		case(16):
			printf("%lX", decimalValue);
			break;
		default:
			printf("Invalid base.");
			break;
	}
}

int main() {
    char input[32];
    int iBase, oBase;

    printf("\nEnter the number: ");
    scanf("%s", input);

    printf("\nEnter the base of the number: ");
    scanf("%d", &iBase);

    printf("\nEnter the base to convert to: ");
    scanf("%d", &oBase);

    if ((iBase == 2 || iBase == 8 || iBase == 10 || iBase == 16) &&
        (oBase == 2 || oBase == 8 || oBase == 10 || oBase == 16)) {
        convertNumber(input, iBase, oBase);
    } else {
        printf("Invalid base entered.\n");
    }

    return 0;
}
