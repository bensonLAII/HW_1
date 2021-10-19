#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number,oddeven;

	printf("叫块俱计耞琌计or案计\n");
	scanf_s("%d", &number);

	
	if (number % 2 == 1)
	{
		printf("\n%d计\n",number);
	}
	if (number % 2 == 0)
	{
		printf("\n%d案计\n", number);
	}




	system("pause");
	return 0;
}