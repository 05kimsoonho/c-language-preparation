#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

    int input, score, sum;
    char test[80];

    scanf("%d", &input);

    for (int i = 0; i < input; i++) {//입력 받은 횟수만큼 작동
        sum = 0;//공간 초기화
        score = 1;//점수 초기 설정
        scanf("%s", test);//OX입력 받음
        for (int j = 0; j < strlen(test); j++) {//strlen 문자열 길이 측정해서 입력 받은 횟수만큼 작동
            if (test[j] == 'O') {//O인 경우
                sum += score;//출력할 것에 점수를 추가
                score++;//연속적인 정답시 점수 추가
            }
            if (test[j] == 'X')  score = 1;//X가 나오면 score 1로 초기화
        }
        printf("%d\n", sum);//점수 최종 출력
    }
}