#include <stdio.h>
#include <stdlib.h>

int main() {
	int num_stu;
	printf("�л� �� �Է�");
	scanf_s("%d", &num_stu);

	int* scores;
	scores = (int*)malloc(sizeof(int) * num_stu);

	for (int i = 0; i < num_stu; i++) {
		printf("�л� # %d-%d �����Է�:", num_stu, i + 1);
		scanf_s("%d", scores + i);
	}

	int sum = 0;
	for(int i = 0; i < num_stu; i++) {
		sum += scores[i];
	}
	printf("%d", num_stu);
}
 