#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	short passmoney, parkmoney;
	float mileage, gasspend, gasmoney, total;

	printf("�п�J�@��Ѫ��`���{��(km)\n");
	scanf_s("%f", &mileage);

	printf("�п�J�T�o�@����/�[�ڦh�ֿ�)\n");
	scanf_s("%f", &gasmoney);

	printf("�п�J�����@����/�[�گ��p�h�֤���\n");
	scanf_s("%f", &gasspend);

	printf("�п�J�@�Ѫ������O\n");
	scanf_s("%hd", &parkmoney);

	printf("�п�J�@�Ѫ��q��O(�L���O)\n");
	scanf_s("%hd", &passmoney);

	total = mileage * gasspend*gasmoney + parkmoney + passmoney;

	printf("�@�ѤU�ӧA�Ҷ}������O%.2f", total);


	system("pause");
	return 0;
}