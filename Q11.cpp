#include <stdio.h>

void findFloorCeil(int arr[], int low, int high, int key, int *floor, int *ceil) {
    if (low > high) return;

    int mid = (low + high) / 2;

    if (arr[mid] == key) {
        *floor = key;
        *ceil = key;
        return;
    }

    if (arr[mid] < key) {
        *floor = arr[mid];
        findFloorCeil(arr, mid + 1, high, key, floor, ceil);
    } else {
        *ceil = arr[mid];
        findFloorCeil(arr, low, mid - 1, key, floor, ceil);
    }
}

int main() {
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5, floor = -1, ceil = -1;

    findFloorCeil(arr, 0, n - 1, key, &floor, &ceil);

    printf("Floor: %d, Ceil: %d\n", floor, ceil);
    return 0;
}

