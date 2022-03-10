#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* 바로 "45분 일찍 알람 설정하기"이다.
* 분이 45보다 작은 경우
* 시간이 0보다 작은 경우
* 분이 45보다 큰 경우
*/
int main() {
	int h, m;//h, m을 선언한다
	scanf("%d%d", &h, &m);//h, m을 입력받는다
	m -= 45;//분에서 45를 빼준다
	if (m < 0) {//m이 0보다 작을 경우
		m += 60;//m에 60을 더해준다
		h -= 1;//이후 h에서 1을 빼준다
		if (h < 0)h = 23;//h가 0보다 작을 경우 23으로 값을 재입력 해준다
	}
	printf("%d %d", h, m);//h, m을 출력해준다
	return 0;
}
