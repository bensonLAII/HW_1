#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number1, number2, sum;

	printf("�п�J��ӼƭȧP�_�O�_���������Y\n");
	scanf_s("%d %d", &number1, &number2);

	sum = number1 % number2;

	if (sum == 0)
	{
		printf("�Ĥ@�ӼƦr�O�ĤG�ӼƦr������\n");
	}
	if (sum != 0)
	{
		printf("�Ĥ@�ӼƦr���O�ĤG�ӼƦr������\n");
	}


	system("pause");
	return 0;
}