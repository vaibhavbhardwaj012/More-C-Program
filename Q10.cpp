#include <stdio.h>

int findMissingTerm(int arr[], int n) {
    int low = 0, high = n - 1;
    int diff = (arr[n - 1] - arr[0]) / n;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] != arr[0] + mid * diff) {
            if (mid > 0 && arr[mid] - arr[mid - 1] != diff) {
                return arr[mid - 1] + diff;
            }
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 8, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Missing term is %d\n", findMissingTerm(arr, n));
    return 0;
}

