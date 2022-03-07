#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.
*/
int main() {
	int n;//n를 선언한다
	scanf("%d", &n);//n를 입력받는다
	for (int i = 1; i <= 9; i++) {//i를 선언 후 1로 정의 9이하일경우 i증가
		printf("%d * %d = %d\n", n, i, n * i);//n, i, i*n 출력
	}
	return 0;
}