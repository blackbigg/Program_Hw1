#include <stdio.h>
#include <stdlib.h>
void main()
{
	int num1, num2, num3;
	int Lnum = 0, Snum = 9999;
	printf("�п�J�T�ӼƦr:");
	scanf("%d %d %d", &num1, &num2, &num3);
	int L, S;
	if (num1 >= num2 && num1 >= num3)
	{
		L = num1;
	}
	else if (num2 >= num3 && num2 >= num1)
	{
		L = num2;
	}
	else
	{
		L = num3;
	}
	//���νu
	if (num1 <= num2 && num1 <= num3)
	{
		S = num1;
	}
	else if (num2 <= num3 && num2 <= num1)
	{
		S = num2;
	}
	else
	{
		S = num3;
	}

	printf("�̤j:%d\n�̤p:%d", L, S);
}