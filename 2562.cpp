#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* 최댓값과 입력된 순서를 출력하시오
*/
int main() {
	int input;//받는 값
	int max = 0;//최댓 값
	int pos = 0;//입력된 순서

	for (int i = 1; i < 10; ++i) {//9번 돌게해줌
		scanf("%d", &input);//값 입력받음
		if (input > max) {//수를 비교해서 최댓값을 찾음
			max = input;//만일 수가 크다면 값 변경
			pos = i;//입력된 순서를 저장
		}
	}
	printf("%d\n%d\n", max, pos);//최댓값과 입력된 순서 출력

	return 0;
}