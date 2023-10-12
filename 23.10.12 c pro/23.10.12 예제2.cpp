#include<stdio.h>

void swap(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
}
void sort(int arr[5], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(&arr[i], &arr[min_index]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = { 6, 2, 8, 4, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("before sort: ");
    printArray(arr, size);

    sort(arr, size);

    printf("after sort: ");
    printArray(arr, size);

    return 0;
}
