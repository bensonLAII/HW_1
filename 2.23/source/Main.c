#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number1, number2, number3;
	printf("�п�J�T�ӭ�\n");
	scanf_s("%d %d %d", &number1, &number2, &number3);
	
	if (number1 >= number2 && number1 >= number3)
	{
		printf("�̤j��%d\n", number1);
	}
	if (number2 >= number1 && number2 >= number3)
	{
		printf("�̤j��%d\n", number2);
	}
	if (number3 >= number2 && number3 >= number1)
	{
		printf("�̤j��%d\n", number3);
	}

	if (number1 <= number2 && number1 <= number3)
	{
		printf("�̤p��%d\n", number1);
	}
	if (number2 <= number1 && number2 <= number3)
	{
		printf("�̤p��%d\n", number2);
	}
	if (number3 <= number2 && number3 <= number1)
	{
		printf("�̤p��%d\n", number3);
	}
	
	system("pause");
	return 0;

}