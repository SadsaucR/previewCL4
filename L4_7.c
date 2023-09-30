/*陣列應用4:二維陣列的宣告及比大小*/
#include <stdio.h>
void L4_7()
{
	int data[2][4] = { {54,195,8,44},{165,41,61,74} }; /*二維陣列宣告方式[2列][4行]*/
	int i, j, min, max;
	min = max = data[0][0]; /*[0][0]指向54(第1列第1行)*/
	printf("陣列\n");
	for (i = 0;i < 2;i++) /*外層迴圈，控制列數*/
	{
		for (j = 0;j < 4;j++) /*內層迴圈，控制行數*/
		{
			printf("%d ", data[i][j]);
			if (data[i][j] > max)
				max = data[i][j];
			if (data[i][j] < min)
				min = data[i][j];
		}
		printf("\n");
	}
	printf("最大值為%d，最小值為%d", max, min);
}