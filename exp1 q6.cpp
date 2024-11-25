#include <stdio.h>

int main() {
    printf("Even numbers between 100 and 200:\n");

    for (int i = 100; i <= 200; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

