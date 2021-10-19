#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	for (i = 1;i <= 9;i++)
	{
		if (i ==1 || i == 9)
		{
			printf("\t*********\n");
		}
		if (i >=2 && i <= 8)
		{
			printf("\t*       *\n");
		}
			
	}

	printf("\n");

	for (i = 1;i <= 9;i++)
	{
		if (i == 1 || i == 9)
		{
			printf("\t   ***    \n");
		}
		if (i == 2 ||i == 8)
		{
			printf("\t  *    *\n");
		}
		if (i >= 3 && i <= 7)
		{
			printf("\t *      *\n");
		}
	}

	printf("\n\t    *    \n");
	printf("\t   ***    \n");
	printf("\t  *****    \n");
	for (i = 4;i <= 9;i++)
	{
		printf("\t    *    \n");
	}

	printf("\n");
	
	for (i = 1;i <= 9;i++)
	{
		if (i == 1 || i == 9)
		{
			printf("\t    *    \n");
		}
		if (i == 2 || i == 8)
		{
			printf("\t   * *\n");
		}
		if (i == 3 || i == 7)
		{
			printf("\t  *   *\n");
		}
		if (i == 4 || i == 6)
		{
			printf("\t *     *\n");
		}
		if (i == 5)
		{
			printf("\t*       *\n");
		}

	}







	system("pause");
	return 0;
}