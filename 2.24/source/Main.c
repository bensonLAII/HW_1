#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number,oddeven;

	printf("�п�J�@�Ӿ�ƧP�_�O�_��or����\n");
	scanf_s("%d", &number);

	
	if (number % 2 == 1)
	{
		printf("\n%d���_��\n",number);
	}
	if (number % 2 == 0)
	{
		printf("\n%d������\n", number);
	}




	system("pause");
	return 0;
}