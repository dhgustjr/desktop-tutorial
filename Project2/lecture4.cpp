#include<stdio.h>

int main()
{
	int year;
	scanf_s("%d", &year);
	int yy = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

	printf("%d, yy");
	return 0;
}