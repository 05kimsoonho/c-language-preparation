#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j;
	scanf("%d", &i);
	for (j=1; j <= 9; j++)
	{
		printf("%d x %d = %d\n", i, j, i * j);
	}
	printf("\n");
	return 0;
}