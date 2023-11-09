#include <stdio.h>
#include<limits.h>

int main()
{
    int a = 2147483648;
    if (a == -a) {
        printf("Hello world!");
    }
    else {
        printf("Goodbye world!");
    }
    return 0;