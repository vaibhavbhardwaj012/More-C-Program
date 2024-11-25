#include <stdio.h>

void insertElement(int arr[], int *n, int pos, int elem) {
    for (int i = *n; i > pos; i--) 
        arr[i] = arr[i - 1];
    arr[pos] = elem; 
    (*n)++;
}

void deleteElement(int arr[], int *n, int pos) {
    for (int i = pos; i < *n - 1; i++) 
        arr[i] = arr[i + 1];
    (*n)--;
}

int main() {
    int a1[100] = {1, 2, 3, 4, 5};
    int n = 5, pos, elem;

    pos = 2; elem = 99;
    insertElement(a1, &n, pos, elem);

    pos = 1;
    deleteElement(a1, &n, pos);

    for (int i = 0; i < n; i++)
        printf("%d ", a1[i]);
    return 0;
}

