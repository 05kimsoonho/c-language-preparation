#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
int main() {
	int j, sum=0;//j�� ����� ���� ����� sum�� ����
	scanf("%d", &j);//j�� �Է� �޴´�
	for (int i = 0; i <= j; i++) {//i=0�̰� �Է¹��� �� j �����̸� 1�� �����ϸ� i�� j�����ϰ�� �ݺ��Ѵ�
		sum += i;//������ i�� ���Ѵ�
	}
	printf("%d\n", sum);//����� ����Ѵ�
}