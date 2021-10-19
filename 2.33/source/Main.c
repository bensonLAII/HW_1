#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	short passmoney, parkmoney;
	float mileage, gasspend, gasmoney, total;

	printf("請輸入一整天的總里程數(km)\n");
	scanf_s("%f", &mileage);

	printf("請輸入汽油一公升/加侖多少錢)\n");
	scanf_s("%f", &gasmoney);

	printf("請輸入平均一公升/加侖能行駛多少公里\n");
	scanf_s("%f", &gasspend);

	printf("請輸入一天的停車費\n");
	scanf_s("%hd", &parkmoney);

	printf("請輸入一天的通行費(過路費)\n");
	scanf_s("%hd", &passmoney);

	total = mileage * gasspend*gasmoney + parkmoney + passmoney;

	printf("一天下來你所開車的花費%.2f", total);


	system("pause");
	return 0;
}