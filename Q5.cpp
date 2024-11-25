#include <stdio.h>

int findSmallestMissing(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == mid) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return low;
}

int main() {
    int arr[] = {0, 1, 2, 6, 9, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Smallest missing element: %d\n", findSmallestMissing(arr, n));
    return 0;
}

