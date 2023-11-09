#include <stdio.h>

void Swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("정수 a를 입력하세요: ");
    scanf_s("%d", &a);
    printf("정수 b를 입력하세요: ");
    scanf_s("%d", &b);

    printf("교체 전: a = %d, b = %d\n", a, b);
    Swap(&a, &b);
    printf("교체 후: a = %d, b = %d\n", a, b);

    return 0;
}