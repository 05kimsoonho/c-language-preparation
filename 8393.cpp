#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
*/
int main() {
	int j, sum=0;//j와 출력을 위한 빈공간 sum을 선언
	scanf("%d", &j);//j를 입력 받는다
	for (int i = 0; i <= j; i++) {//i=0이고 입력받은 수 j 이하이며 1씩 증가하며 i가 j이하일경우 반복한다
		sum += i;//공간에 i를 더한다
	}
	printf("%d\n", sum);//결과를 출력한다
}