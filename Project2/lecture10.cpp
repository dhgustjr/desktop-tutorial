#include<stdio.h>

int main()
{
	int count, hap = 0;

	count = 1;
	while (count <= 10)
	{
		hap += count;
		printf("hap=%d,count=%d\n", hap, count);
		count++;
	}
	printf("%d\n", hap);
	return 0;
}