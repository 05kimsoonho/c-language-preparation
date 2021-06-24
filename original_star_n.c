#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i,j,n;
	scanf("%d", &i);
	for (j = 1; j <= i; j++)
	{
		for (n = 1; n <= i; n++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}