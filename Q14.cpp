#include <stdio.h>
#include <math.h>
#include <limits.h> // Include this header for INT_MAX

int divide(int dividend, int divisor) {
    if (divisor == 0) return INT_MAX; // Handle division by zero

    int low = 0, high = abs(dividend), result = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (abs(mid * divisor) <= abs(dividend)) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Adjust the sign of the result
    return (dividend < 0) ^ (divisor < 0) ? -result : result;
}

int main() {
    int dividend = 43, divisor = 5;
    printf("Quotient is %d\n", divide(dividend, divisor));
    return 0;
}

