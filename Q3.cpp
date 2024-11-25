#include <stdio.h>

int findOccurrence(int arr[], int n, int key, int first) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            result = mid;
            if (first) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    printf("First occurrence of %d: %d\n", key, findOccurrence(arr, n, key, 1));
    printf("Last occurrence of %d: %d\n", key, findOccurrence(arr, n, key, 0));
    return 0;
}

