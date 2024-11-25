#include <stdio.h>

void findFloorAndCeil(int arr[], int n, int key) {
    int low = 0, high = n - 1, floor = -1, ceil = -1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            floor = ceil = arr[mid];
            break;
        } else if (arr[mid] < key) {
            floor = arr[mid];
            low = mid + 1;
        } else {
            ceil = arr[mid];
            high = mid - 1;
        }
    }
    printf("Floor: %d, Ceil: %d\n", floor, ceil);
}

int main() {
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    findFloorAndCeil(arr, n, key);
    return 0;
}

