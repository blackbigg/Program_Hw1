#include <stdio.h>
#include <stdlib.h>

void main()
{
	printf("number\tsquare\tcube\n");
	for (int i = 0; i <= 10; i++)
	{
		printf("%d\t%d\t%d\n", i, i * i, i * i * i);
	}
}