#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* ������ �־����� ��, �����̸� 1, �ƴϸ� 0�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
������ ������ 4�� ����̸鼭, 100�� ����� �ƴ� �� �Ǵ� 400�� ����� ���̴�.
���� ���, 2012���� 4�� ����̸鼭 100�� ����� �ƴ϶� �����̴�. 1900���� 100�� ����̰� 400�� ����� �ƴϱ� ������ ������ �ƴϴ�. ������, 2000���� 400�� ����̱� ������ �����̴�.
*/
int main() {
	int a;//a�� �����Ѵ�
	scanf("%d", &a);//a�� �Է¹޴´�
	if (a % 400 == 0)//���� a�� 400�� ������
		printf("1");//1�� ����ϰ�
	else if (a % 100 == 0)//���� a�� 100�� ������
		printf("0");//0�� ����ϰ�
	else if (a % 4 == 0)//���� a�� 4�� ������
		printf("1");//1�� ����ϰ�
	else//�ٸ����
		printf("0");//0�� ����Ѵ�
	return 0;
}