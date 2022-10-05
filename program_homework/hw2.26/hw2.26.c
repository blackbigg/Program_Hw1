#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a, b;
	printf("輸入兩數字:");
	scanf("%d %d", &a, &b);
	if (a % b == 0)
	{
		printf("%d為%d的倍數", a, b);
	}
	else
	{
		printf("%d不是%d的倍數", a, b);
	}

}