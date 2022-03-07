#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
*자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오. 
*/
int main() {
	int s;//s를 선언
	scanf("%d", &s);//s를 입력 받음
	for (int i = 1; i <= s; i++) {//i는 1이고 s이하일 경우 하나씩 수를 더한다
		printf("%d\n", i);//i를 출력하고 줄바꿈
	}
}