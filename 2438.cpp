#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* A+B�� �� �� �� �׽�Ʈ ���̽����� "Case #x: "�� ���
*/
int main() {
	int n, i, j;//n, i, j�� ����
	scanf("%d", &n);//n�� �Է� �޴´�
	for (i = 1; i <= n; i++) {//�Է¹��� ����ŭ �ݺ��ϴ� for��
		for (j = 1; j <= (n - i); j++)//n�� 5 �Է½� j�� 1, 5(n)-1(i)�ؼ� 4ȸ�� ���� �߻�, �׸���  j�� ������ ������ ����
			printf(" ");//���� ���
		for (j = 1; j <= i; j++)//i�� �����ϴ� Ƚ�� ��ŭ ���� ����
			printf("*");//* ���
		printf("\n");//���� �ٷ� �̵�
	}
}
