#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* �����̴� �⸻��縦 ���ƴ�. �����̴� ������ �����ؼ� ���� ��������� �ߴ�. �ϴ� �����̴� �ڱ� ���� �߿� �ִ��� �����. �� ���� M�̶�� �Ѵ�. �׸��� ���� ��� ������ '����/M*100'���� ���ƴ�.
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