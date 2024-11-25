#include <stdio.h>

int main() {
    int rows = 3, cols = 3;
    int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int rowSum, colSum;

    for (int i = 0; i < rows; i++) {
        rowSum = 0;
        colSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
            colSum += matrix[j][i];
        }
        printf("Sum of row %d: %d\n", i, rowSum);
        printf("Sum of column %d: %d\n", i, colSum);
    }

    return 0;
}

