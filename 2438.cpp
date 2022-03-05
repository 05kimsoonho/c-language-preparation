#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* A+B를 한 후 각 테스트 케이스마다 "Case #x: "를 출력
*/
int main() {
	int n, i, j;//n, i, j를 선언
	scanf("%d", &n);//n을 입력 받는다
	for (i = 1; i <= n; i++) {//입력받은 수만큼 반복하는 for문
		for (j = 1; j <= (n - i); j++)//n에 5 입력시 j는 1, 5(n)-1(i)해서 4회의 공백 발생, 그리고  j의 증가로 순차적 감소
			printf(" ");//공백 출력
		for (j = 1; j <= i; j++)//i가 증가하는 횟수 만큼 누적 증가
			printf("*");//* 출력
		printf("\n");//다음 줄로 이동
	}
}
