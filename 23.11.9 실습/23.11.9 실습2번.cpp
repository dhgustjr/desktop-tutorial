#include <stdio.h>

int main() {
    int arr[5][5];
    int num = 1;

    // �迭�� ���� ä���
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = num++;
        }
    }

    // �迭 ����ϱ�
    printf("���� �迭:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    // ��� ���� �ٲپ� ����ϱ�
    printf("\Change row & cloumn \n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}