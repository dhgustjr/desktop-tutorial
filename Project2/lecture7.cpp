#include<stdio.h>

int main()
{
	char season;

	printf("봄 : A or a\n");
	printf("여름 : S or s\n");
	printf("가을 : D or d\n");
	printf("겨울 : F or f\n");
	printf("좋아하는 계절에 해당하는 알파벳 입력:");
	scanf_s("%c", &season, sizeof(season));

	switch (season)
	{
	case 'A':
	case 'a':
		printf("선택한 계절 : 봄\n");
		printf("메세지 : 만물이 소생하는 계절\n");
		break;

	case 'S':
	case 's':
		printf("선택한 계절 : 여름\n");
		printf("메세지 : 시원한 계곡을 즐기는 계절\n");
		break;

	case 'D':
	case 'd':
		printf("선택한 계절 : 가을\n");
		printf("곡식과 거과일이 풍성한 계절\n");
		break;

	case 'F':
	case 'f':
		printf("선택한 계절 : 겨울\n");
		printf("새하얀 눈이 덥인 스키의 계절\n");
		break;

	default:
		printf("선택한 계절 : 오류!!\n");
		printf("알파벳은 대소문자구분없이 ASDF만 허용됩니다.\n");
		break;
	}
	return 0;
}