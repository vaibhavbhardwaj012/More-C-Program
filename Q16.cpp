#include <stdio.h>
#include <stdlib.h>

void findPairsWithDifference(int arr[], int n, int k) {
    int i = 0, j = 1;

    while (i < n && j < n) {
        if (i != j && abs(arr[j] - arr[i]) == k) {
            printf("Pair: (%d, %d)\n", arr[i], arr[j]);
            i++;
            j++;
        } else if (arr[j] - arr[i] < k) {
            j++;
        } else {
            i++;
        }
    }
}

int main() {
    int arr[] = {1, 5, 7, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    findPairsWithDifference(arr, n, k);
    return 0;
}

