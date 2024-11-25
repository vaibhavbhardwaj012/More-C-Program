#include <stdio.h>

void multiplyMatrices(int (*a)[3], int (*b)[3], int (*result)[3], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c; k++) 
                result[i][j] += a[i][k] * b[k][j];
        }
    }
}

int main() {
    int a[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int b[3][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
    int result[3][3];
    
    multiplyMatrices(a, b, result, 3, 3);

    printf("Product matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) 
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}

