#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, weight, height, bmi;
	printf("�^����(1)��ڳ��(2)\n");
	scanf_s("%f", &a);
	if (a == 1)
	{
		printf("�п�J�魫(�S)\n");
		scanf_s("%f", &weight);

		printf("�п�J����(�T)\n");
		scanf_s("%f", &height);

		bmi = (weight * 703) / (height * height);
	}
	if (a == 2)
	{
		printf("�п�J�魫(����)\n");
		scanf_s("%f", &weight);

		printf("�п�J����(����)\n");
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