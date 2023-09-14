#include<stdio.h>

int main()
{
	int num,result;

	printf("정수입력:");
	scanf_s("%d", num);

	result = num % 2;
	if (result != 0)
		printf("입력한 정수 %d는 홀수입니다\n", num);
	else
		printf("입력한 정수는 %d는 짝수입니다\n", num);
	return 0;
}