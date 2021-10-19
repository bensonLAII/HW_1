#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, weight, height, bmi;
	printf("英制單位(1)國際單位(2)\n");
	scanf_s("%f", &a);
	if (a == 1)
	{
		printf("請輸入體重(磅)\n");
		scanf_s("%f", &weight);

		printf("請輸入身高(吋)\n");
		scanf_s("%f", &height);

		bmi = (weight * 703) / (height * height);
	}
	if (a == 2)
	{
		printf("請輸入體重(公斤)\n");
		scanf_s("%f", &weight);

		printf("請輸入身高(公尺)\n");
		scanf_s("%f", &height);

		bmi = weight / (height * height);
	}

	printf("BMI=%.1f\n", bmi);

	if (bmi <= 18.5)
	{
		printf("Underweight:less 18.5");
	}
	if (bmi >= 18.5 && bmi <= 24.9)
	{
		printf("Normal:between 18.5 and 24.9");
	}
	if (bmi >= 25 && bmi <= 29.9)
	{
		printf("Overweight:between 25 and 29.9");
	}
	if (bmi >= 30)
	{
		printf("Obese: 30 or greater ");
	}


	system("pause");
	return 0;
}