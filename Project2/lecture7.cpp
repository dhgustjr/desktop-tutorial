#include<stdio.h>

int main()
{
	char season;

	printf("�� : A or a\n");
	printf("���� : S or s\n");
	printf("���� : D or d\n");
	printf("�ܿ� : F or f\n");
	printf("�����ϴ� ������ �ش��ϴ� ���ĺ� �Է�:");
	scanf_s("%c", &season, sizeof(season));

	switch (season)
	{
	case 'A':
	case 'a':
		printf("������ ���� : ��\n");
		printf("�޼��� : ������ �һ��ϴ� ����\n");
		break;

	case 'S':
	case 's':
		printf("������ ���� : ����\n");
		printf("�޼��� : �ÿ��� ����� ���� ����\n");
		break;

	case 'D':
	case 'd':
		printf("������ ���� : ����\n");
		printf("��İ� �Ű����� ǳ���� ����\n");
		break;

	case 'F':
	case 'f':
		printf("������ ���� : �ܿ�\n");
		printf("���Ͼ� ���� ���� ��Ű�� ����\n");
		break;

	default:
		printf("������ ���� : ����!!\n");
		printf("���ĺ��� ��ҹ��ڱ��о��� ASDF�� ���˴ϴ�.\n");
		break;
	}
	return 0;
}