#include<stdio.h>

double Div(int a, int b) {
    if (b == 0) {
        printf("0���� ���� �� �����ϴ�.\n"); // �и� 0�̸� �ȵ�
        return -1;
    }

    int divide = a / b;
    int mod = a % b;
    double result = divide + (double)mod / b; 

    return result;
}

int main() {
    int a, b;
    printf("�� ������ �Է��Ͻÿ�: ");
    scanf_s("%d %d", &a, &b);

    double result = Div(a, b);
    printf("%.5f\n", result);

    return 0;
}