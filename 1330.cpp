#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�� ���� A�� B�� �־����� ��, A�� B�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
int main() {
	int a, b;//a, b�� ������ �ش�
	scanf("%d %d", &a, &b);//a, b�� �Է¹޾��ش�
	if (a > b) //���� a�� b���� ũ�ٸ�
		printf(">");//>�� ����ϰ�
	else if(a < b) //���� a�� b���� �۴ٸ�
			printf("<");//<�� ����ϰ�
	else //�׿��� ��쿡��
		printf("==");//==�� ����Ѵ�
	return 0;
}