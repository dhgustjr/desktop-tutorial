#include<stdio.h>

void swap(int* pa, int* pb) {
    int c = *pa;
    *pa = *pb;
    *pb = c;
}

int main() {
    int x = 10;
    int y = 500;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}