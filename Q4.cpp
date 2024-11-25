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

int countOccurrences(int arr[], int n, int key) {
    int first = findOccurrence(arr, n, key, 1);
    if (first == -1) {
        return 0;
    }
    int last = findOccurrence(arr, n, key, 0);
    return last - first + 1;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    printf("Count of %d: %d\n", key, countOccurrences(arr, n, key));
    return 0;
}

