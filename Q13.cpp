#include <stdio.h>

int findSquareRoot(int x) {
    if (x == 0 || x == 1) return x;

    int low = 1, high = x / 2, result = 0;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (mid * mid == x) return mid;

        if (mid * mid < x) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int x = 50;
    printf("Square root of %d is %d\n", x, findSquareRoot(x));
    return 0;
}

