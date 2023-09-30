/*亂數應用:不重複亂數(另解，洗牌法)*/
#include <stdio.h>
#include <stdlib.h>
void L4_10()
{
	int r[6] = { 0 }; /*六面骰範例*/
	int i, tmp,pos;
	r[0] = 6;
	for (i = 1;i < 6;i++)
		r[i] = i;
	for (i = 0;i < 6;i++)
	{
		pos = 5 * rand() / RAND_MAX;
		tmp = r[i];
		r[i] = r[pos];
		r[pos] = tmp;
	}
	for (i = 0; i < 6; i++)
		printf("%d ", r[i]);
	return 0;
}