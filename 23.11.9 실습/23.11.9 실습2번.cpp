#include <stdio.h>

int main() {
    int arr[5][5];
    int num = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = num++;
        }
    }
    printf("원래 배열:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\Change row & cloumn \n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}