#include <stdio.h>
#include <stdlib.h>

struct Student {
	int sno;
	char name[10];
	int score;
};

int main() {
	int num_stu;
	printf("�л� �� �Է�");
	scanf_s("%d", &num_stu);

	struct Student* std;
	std = (struct Student*)malloc(sizeof(struct Student) * num_stu);

	for (int i = 0; i < num_stu; i++) {
		printf("�л� # %d-%d �й��Է�:", num_stu, i + 1);
		scanf_s("%d", &std[i].sno);

		printf("�л� # %d-%d �̸��Է�:", num_stu, i + 1);
		scanf_s("%9s", std[i].name, sizeof(std[i].name));

		printf("�л� # %d-%d �����Է�:", num_stu, i + 1);
		scanf_s("%d", &std[i].score);
	}

	int sum = 0;
	for (int i = 0; i < num_stu; i++) {
		sum += std[i].score;
		printf("%d", sum);
	}
}