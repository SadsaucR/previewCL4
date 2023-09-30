/*陣列應用2:氣泡排序法*/
#include <stdio.h>
void L4_5()
{
	int data[5] = { 5,72,81,54,61 }; /*宣告陣列初值*/
	int i, j, tmp;
	printf("排序前...\n");
	for (i = 0;i < 5;i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");
	/*以下為氣泡排序法*/
	for (i = 1;i < 5;i++)            /*i用來記錄次數*/
	{
		for (j = 0;j < 5 - i;j++)    /*j表示陣列值並排序，第1次迴圈需比較4次，第2次需比較3次...中間的5-i由此而來*/
		{
			if(data[j]>data[j+1])    /*如果第1項的值大於第2項，兩值交換位子，重複此流程，達到由小排序到大。*/
			{
				tmp = data[j + 1];         /*先將j+1的值保留tmp中*/
				data[j + 1] = data[j];     /*j+1的值被j的值取代*/
				data[j] = tmp;           /*j的值藉由tmp更新為j+1的值，達成互換*/
			}
		}
	}
	printf("排序完畢...\n");
	for (i = 0;i < 5;i++)
	{
		printf("%d ", data[i]);
	}

}