#include <stdio.h>
#include <stdlib.h>

void main()
{
	float a, b, c, d, e;
	float sum;
	printf("�п�J�H�U�ƭ�:\n(a)�@��Ѫ��`���{��(b)�T�o�@����/�[�ڦh�ֿ�(c)�����@����/�[�گ��p�h�֤���(d)�@�Ѫ������O(e)�@�Ѫ��q��O(�L���O)\n");
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

	sum = a / c * b + d + e;
	printf("�@�Ѷ}������O�O%.1f", sum);
}