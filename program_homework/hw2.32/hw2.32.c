#include <stdio.h>
#include <stdlib.h>

void main()
{
	float height, weight,BMI;
	printf("請輸入身高(公尺)體重(公斤)\n");
	scanf("%f %f",&height, &weight);
	BMI = weight/(height*height);
	printf("你的BMI為%.2f\n\n", BMI);

	printf("成人肥胖定義\tBMI\n");
	printf("體重過輕\tBMI<18.5\n");
	printf("健康體位\t8.5<=BMI<24\n");
	printf("體重過重\t24<=BMI<27\n");
	printf("輕度肥胖\t27<=BMI<30\n");
	printf("中度肥胖\t30<=BMI<35\n");
	printf("過度肥胖\tBMI>=35\n");
}