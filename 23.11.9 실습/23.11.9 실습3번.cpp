#include <stdio.h>

void Swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("���� a�� �Է��ϼ���: ");
    scanf_s("%d", &a);
    printf("���� b�� �Է��ϼ���: ");
    scanf_s("%d", &b);

    printf("��ü ��: a = %d, b = %d\n", a, b);
    Swap(&a, &b);
    printf("��ü ��: a = %d, b = %d\n", a, b);

    return 0;
}