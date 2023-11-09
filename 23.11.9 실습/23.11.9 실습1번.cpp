#include<stdio.h>

double Div(int a, int b) {
    if (b == 0) {
        printf("0으로 나눌 수 없습니다.\n"); // 분모가 0이면 안됨
        return -1;
    }

    int divide = a / b;
    int mod = a % b;
    double result = divide + (double)mod / b; 

    return result;
}

int main() {
    int a, b;
    printf("두 정수를 입력하시오: ");
    scanf_s("%d %d", &a, &b);

    double result = Div(a, b);
    printf("%.5f\n", result);

    return 0;
}