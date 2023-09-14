#include<stdio.h>

int main()
{
	int count, hap = 0;

	for (count = 1; count <= 10; count++)
	{
		hap += count;
		printf("%d까지 누적합 출력 : hap = %d\n", count, hap);
	}
	printf("1+2+~+9+10=%d\n", hap);
	return 0;
}