#include <stdio.h>
#include <stdlib.h>

void main()
{
	float height, weight,BMI;
	printf("�п�J����(����)�魫(����)\n");
	scanf("%f %f",&height, &weight);
	BMI = weight/(height*height);
	printf("�A��BMI��%.2f\n\n", BMI);

	printf("���H�έD�w�q\tBMI\n");
	printf("�魫�L��\tBMI<18.5\n");
	printf("���d���\t8.5<=BMI<24\n");
	printf("�魫�L��\t24<=BMI<27\n");
	printf("���תέD\t27<=BMI<30\n");
	printf("���תέD\t30<=BMI<35\n");
	printf("�L�תέD\tBMI>=35\n");
}