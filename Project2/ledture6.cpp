#include<stdio.h>

int main()
{
	int jumsu;
	char grade;

	printf("점수입력:");
	scanf_s("%d,&jumsu");

	if (jumsu >= 90)
		grade = 'A';
	else if (jumsu >= 80)
		grade = 'B';
	else if (jumsu >= 70)
		grade = 'C';
	else if (jumsu >= 60)
		grade = 'D';
	else
		grade = 'F';
	printf("점수등급:%c학점");
	return 0;
}