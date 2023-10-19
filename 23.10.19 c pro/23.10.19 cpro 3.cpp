#include <stdio.h>
#include <stdlib.h>

struct Student {
	int sno;
	char name[10];
	int score;
};

int main() {
	int num_stu;
	printf("학생 수 입력");
	scanf_s("%d", &num_stu);

	struct Student* std;
	std = (struct Student*)malloc(sizeof(struct Student) * num_stu);

	for (int i = 0; i < num_stu; i++) {
		printf("학생 # %d-%d 학번입력:", num_stu, i + 1);
		scanf_s("%d", &std[i].sno);

		printf("학생 # %d-%d 이름입력:", num_stu, i + 1);
		scanf_s("%9s", std[i].name, sizeof(std[i].name));

		printf("학생 # %d-%d 점수입력:", num_stu, i + 1);
		scanf_s("%d", &std[i].score);
	}

	int sum = 0;
	for (int i = 0; i < num_stu; i++) {
		sum += std[i].score;
		printf("%d", sum);
	}
}