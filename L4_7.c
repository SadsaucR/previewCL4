/*�}�C����4:�G���}�C���ŧi�Τ�j�p*/
#include <stdio.h>
void L4_7()
{
	int data[2][4] = { {54,195,8,44},{165,41,61,74} }; /*�G���}�C�ŧi�覡[2�C][4��]*/
	int i, j, min, max;
	min = max = data[0][0]; /*[0][0]���V54(��1�C��1��)*/
	printf("�}�C\n");
	for (i = 0;i < 2;i++) /*�~�h�j��A����C��*/
	{
		for (j = 0;j < 4;j++) /*���h�j��A������*/
		{
			printf("%d ", data[i][j]);
			if (data[i][j] > max)
				max = data[i][j];
			if (data[i][j] < min)
				min = data[i][j];
		}
		printf("\n");
	}
	printf("�̤j�Ȭ�%d�A�̤p�Ȭ�%d", max, min);
}