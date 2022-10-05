#include <stdio.h>
#include <stdlib.h>
void main()
{
	int input;
	printf("块俱计:");
	scanf("%d", &input);
	if (input % 2 == 0)
	{
		printf("计案计");
	}
	else
	{
		printf("计计");
	}
}