/*陣列應用3:倒序(這個其實比排序更簡單，因為不用進行判斷)*/
#include <stdio.h>
void L4_6()
{
	int data[5] = { 5,72,81,54,61 };
	int i, j, tmp;
	printf("倒序前>>");
	for (i = 0;i < 5;i++)
		printf("%d ", data[i]);
	printf("\n");
	/*以下開始排序(氣泡排序法)*/
	for (i = 1;i < 5;i++) /*紀錄次數*/
	{
		for (j = 0;j < 5 - i;j++)
		{
			tmp=data[j];
			data[j] = data[j + 1];
			data[j + 1] = tmp;
		}
	}
	printf("到序後>>");
	for (i = 0;i < 5;i++)
		printf("%d ", data[i]);
	printf("\n");
}