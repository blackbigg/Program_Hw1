#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a, b;
	printf("��J��Ʀr:");
	scanf("%d %d", &a, &b);
	if (a % b == 0)
	{
		printf("%d��%d������", a, b);
	}
	else
	{
		printf("%d���O%d������", a, b);
	}

}