#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* �ִ񰪰� �Էµ� ������ ����Ͻÿ�
*/
int main() {
	int input;//�޴� ��
	int max = 0;//�ִ� ��
	int pos = 0;//�Էµ� ����

	for (int i = 1; i < 10; ++i) {//9�� ��������
		scanf("%d", &input);//�� �Է¹���
		if (input > max) {//���� ���ؼ� �ִ��� ã��
			max = input;//���� ���� ũ�ٸ� �� ����
			pos = i;//�Էµ� ������ ����
		}
	}
	printf("%d\n%d\n", max, pos);//�ִ񰪰� �Էµ� ���� ���

	return 0;
}