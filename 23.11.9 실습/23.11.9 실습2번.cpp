#include <stdio.h>

int main() {
    int arr[5][5];
    int num = 1;

    // 배열에 숫자 채우기
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = num++;
        }
    }

    // 배열 출력하기
    printf("원래 배열:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    // 행과 열을 바꾸어 출력하기
    printf("\Change row & cloumn \n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}