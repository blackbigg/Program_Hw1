#include <stdio.h>
#include <stdlib.h>

void main()
{
	float a, b, c, d, e;
	float sum;
	printf("請輸入以下數值:\n(a)一整天的總里程數(b)汽油一公升/加侖多少錢(c)平均一公升/加侖能行駛多少公里(d)一天的停車費(e)一天的通行費(過路費)\n");
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

	sum = a / c * b + d + e;
	printf("一天開車的花費是%.1f", sum);
}