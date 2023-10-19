#include <stdio.h>
#include <stdlib.h>

int main() {
	int num_stu;
	printf("학생 수 입력");
	scanf_s("%d", &num_stu);

	int* scores;
	scores = (int*)malloc(sizeof(int) * num_stu);

	for (int i = 0; i < num_stu; i++) {
		printf("학생 # %d-%d 성적입력:", num_stu, i + 1);
		scanf_s("%d", scores + i);
	}

	int sum = 0;
	for(int i = 0; i < num_stu; i++) {
		sum += scores[i];
	}
	printf("%d", num_stu);
}
 