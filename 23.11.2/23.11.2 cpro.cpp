#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

int count_strike(int answer[], int guess[]);
int count_ball(int answer[], int guess[]);
int unique_num(int number[], int n);

int main() {
    int answer[SIZE], guess[SIZE];
    int strikes = 0, balls;

    srand(time(NULL));

    printf("숫자 야구 게임에 오신 것을 환영합니다!\n");

    for (int i = 0; i < SIZE; ) {
        int num = rand() % 9 + 1;
        answer[i] = num;
        if (unique_num(answer, i)) {
            i++;
        }
    }

    while (strikes < 3) {
        printf("세 자리 숫자를 입력해 주세요 (예: 1 2 3): ");
        for (int i = 0; i < SIZE; i++) {
            scanf_s("%d", &guess[i]);
        }

        strikes = count_strike(answer, guess);
        balls = count_ball(answer, guess);

        if (strikes == 3) {
            printf("축하합니다! 정답을 맞추셨습니다!\n");
        }
        else {
            printf("%d 스트라이크, %d 볼\n", strikes, balls);
        }
    }

    return 0;
}

int count_strike(int answer[], int guess[]) {
    int strikes = 0;
    for (int i = 0; i < SIZE; i++) {
        if (answer[i] == guess[i]) {
            strikes++;
        }
    }
    return strikes;
}

int count_ball(int answer[], int guess[]) {
    int balls = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i != j && answer[i] == guess[j]) {
                balls++;
            }
        }
    }
    return balls;
}

int unique_num(int number[], int n) {
    for (int i = 0; i < n; i++) {
        if (number[i] == number[n]) {
            return 0;
        }
    }
    return 1;
}