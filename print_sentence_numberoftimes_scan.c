#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, n=1;
	char j[50];
	printf("�ݺ��� Ƚ���� ����� ������ �Է��� �ּ���.\n");
	scanf("%d %s", &i, &j);
	while (n <= i)
	{
		printf("%s %d\n", j, n);
		n++;
	}
	return 0;
}