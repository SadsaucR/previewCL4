/*�ü�����:�����ƶü�(�ɤO�Ѫk�A�Ĳv���t)*/
#include <stdio.h>
#include <stdlib.h>
void L4_9()
{
	srand((unsigned)time(NULL) + getpid());
	int r[6] = { 0 }; /*������d��*/
	int i,j;
	for (i = 0;i < 6;i++)
	{
		if (i == 0)
			r[i] = rand() % 6 + 1; /*���w1~6���ü�*/
		if(i>0)
		{
			r[i] = rand() % 6 + 1;
			loop:
		for(j=0;j<i;j++)
		{
			while (r[i] == r[j])
			{
				r[i] = rand() % 6 + 1;
				goto loop;
			} 
		}
		}
		printf("%d ", r[i]);
	}
}