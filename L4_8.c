/*�}�C����5:rand()�üƱƧ�*/
#include <stdio.h>
#include <stdlib.h> /*rand()��Ʀ�󦹼��Y��*/
#include <time.h>
void L4_8()
{
	srand((unsigned)time(NULL) + getpid());
	int r[2][4] = { 0 };
	int tp[8] = { 0 };
	int i, j,k,tmp;
	printf("�üư}�C��\n");
	for (i = 0;i < 2;i++)
	{
		for (j = 0;j < 4;j++)
		{
			r[i][j] = (rand() % 1001); /*�ͦ�0~1000���H����*/
			printf("%d ", r[i][j]);
		}
		printf("\n");
	}
	/*�G����@��*/
	k = 0;
		for (i = 0;i < 2;i++)
		{
			for (j = 0;j < 4;j++,k++)
			{
				tp[k] = r[i][j];
			}
		}
		/*���Ƨ�*/
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
		/*�@����G��*/
		k = 0;
		for (i = 0;i < 2;i++)
		{
			for (j = 0;j < 4;j++,k++)
			{
				r[i][j] = tp[k];
			}
		}
		printf("�ƦC����\n");
		for (i = 0;i < 2;i++)
		{
			for (j = 0;j < 4;j++)
			{
				printf("%d ", r[i][j]);
			}
			printf("\n");
		}
		

}
