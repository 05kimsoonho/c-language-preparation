#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* N�� �Է¹��� ��, ������ N���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��� ���Ŀ� ���缭 ����ϸ� �ȴ�.
*/
int main() {
	int n;//n�� �����Ѵ�
	scanf("%d", &n);//n�� �Է¹޴´�
	for (int i = 1; i <= 9; i++) {//i�� ���� �� 1�� ���� 9�����ϰ�� i����
		printf("%d * %d = %d\n", n, i, n * i);//n, i, i*n ���
	}
	return 0;
}