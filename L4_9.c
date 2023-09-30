/*亂數應用:不重複亂數(暴力解法，效率較差)*/
#include <stdio.h>
#include <stdlib.h>
void L4_9()
{
	srand((unsigned)time(NULL) + getpid());
	int r[6] = { 0 }; /*六面骰範例*/
	int i,j;
	for (i = 0;i < 6;i++)
	{
		if (i == 0)
			r[i] = rand() % 6 + 1; /*指定1~6的亂數*/
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