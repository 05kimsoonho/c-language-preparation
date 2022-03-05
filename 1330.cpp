#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.
int main() {
	int a, b;//a, b를 선언해 준다
	scanf("%d %d", &a, &b);//a, b를 입력받아준다
	if (a > b) //만약 a가 b보다 크다면
		printf(">");//>를 출력하고
	else if(a < b) //만약 a가 b보다 작다면
			printf("<");//<를 출력하고
	else //그외의 경우에는
		printf("==");//==를 출력한다
	return 0;
}