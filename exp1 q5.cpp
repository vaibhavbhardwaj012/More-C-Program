#include <stdio.h>

int main() {
    int a, b, quotient, remainder;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b != 0) {
        quotient = a / b;
        remainder = a % b;
        printf("Quotient: %d, Remainder: %d\n", quotient, remainder);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}

