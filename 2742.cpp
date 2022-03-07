#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
*자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
*/
int main() {
	int s, j;//s와j를 선언
	scanf("%d", &s);//s를 입력 받음
	j = s;//j의 값을 s로 해준다
	for (int i = 1; i <= j; i++) {//i는 1이고 j이하일 경우 하나씩 수를 더한다
		printf("%d\n", s);//s를 출력하고 줄바꿈
		s--;//s를 순차적으로 감소시킴
	}
}