/*陣列應用5:rand()亂數排序*/
#include <stdio.h>
#include <stdlib.h> /*rand()函數位於此標頭內*/
#include <time.h>
void L4_8()
{
	srand((unsigned)time(NULL) + getpid());
	int r[2][4] = { 0 };
	int tp[8] = { 0 };
	int i, j,k,tmp;
	printf("亂數陣列為\n");
	for (i = 0;i < 2;i++)
	{
		for (j = 0;j < 4;j++)
		{
			r[i][j] = (rand() % 1001); /*生成0~1000的隨機數*/
			printf("%d ", r[i][j]);
		}
		printf("\n");
	}
	/*二維轉一維*/
	k = 0;
		for (i = 0;i < 2;i++)
		{
			for (j = 0;j < 4;j++,k++)
			{
				tp[k] = r[i][j];
			}
		}
		/*做排序*/
		for (i = 1;i < 8;i++)
		{
			for (j = 0;j < 8 - i;j++)
			{
				if (tp[j] > tp[j + 1])
				{
					tmp = tp[j];
					tp[j] = tp[j + 1];
					tp[j + 1] = tmp;
				}
			}
		}
		/*一維轉二維*/
		k = 0;
		for (i = 0;i < 2;i++)
		{
			for (j = 0;j < 4;j++,k++)
			{
				r[i][j] = tp[k];
			}
		}
		printf("排列完畢\n");
		for (i = 0;i < 2;i++)
		{
			for (j = 0;j < 4;j++)
			{
				printf("%d ", r[i][j]);
			}
			printf("\n");
		}
		

}
