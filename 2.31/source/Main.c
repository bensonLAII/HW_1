#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number,square,cube;
	printf("number\tsquare\tcube\n");
	for (number = 0;number <= 10;number++)
	{
		square = number * number;
		cube = number *number * number;
		printf("%d\t%d\t%d\t\n", number, square, cube);
	}

	system("pause");
	return 0;
}