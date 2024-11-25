#include <stdio.h>

int searchNearlySortedArray(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        if (mid > low && arr[mid - 1] == key) {
            return mid - 1;
        }
        if (mid < high && arr[mid + 1] == key) {
            return mid + 1;
        }

        if (arr[mid] < key) {
            low = mid + 2;
        } else {
            high = mid - 2;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 40;
    int result = searchNearlySortedArray(arr, n, key);
    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}

