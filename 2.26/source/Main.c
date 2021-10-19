#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number1, number2, sum;

	printf("叫块ㄢ计耞琌计闽玒\n");
	scanf_s("%d %d", &number1, &number2);

	sum = number1 % number2;

	if (sum == 0)
	{
		printf("材计琌材计计\n");
	}
	if (sum != 0)
	{
		printf("材计ぃ琌材计计\n");
	}


	system("pause");
	return 0;
}