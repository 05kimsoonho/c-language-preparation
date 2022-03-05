#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* 세준이는 기말고사를 망쳤다. 세준이는 점수를 조작해서 집에 가져가기로 했다. 일단 세준이는 자기 점수 중에 최댓값을 골랐다. 이 값을 M이라고 한다. 그리고 나서 모든 점수를 '점수/M*100'으로 고쳤다.
*/
int main() {
	int n, score, big = 0;
	double sum = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &score);
		sum += score;
		if (big < score)
			big = score;
	}
	printf("%lf", (sum / big * 100) / n);
	return 0;
}