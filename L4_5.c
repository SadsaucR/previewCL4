/*�}�C����2:��w�ƧǪk*/
#include <stdio.h>
void L4_5()
{
	int data[5] = { 5,72,81,54,61 }; /*�ŧi�}�C���*/
	int i, j, tmp;
	printf("�Ƨǫe...\n");
	for (i = 0;i < 5;i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");
	/*�H�U����w�ƧǪk*/
	for (i = 1;i < 5;i++)            /*i�ΨӰO������*/
	{
		for (j = 0;j < 5 - i;j++)    /*j��ܰ}�C�ȨñƧǡA��1���j��ݤ��4���A��2���ݤ��3��...������5-i�Ѧ��Ө�*/
		{
			if(data[j]>data[j+1])    /*�p�G��1�����Ȥj���2���A��ȥ洫��l�A���Ʀ��y�{�A�F��Ѥp�ƧǨ�j�C*/
			{
				tmp = data[j + 1];         /*���Nj+1���ȫO�dtmp��*/
				data[j + 1] = data[j];     /*j+1���ȳQj���Ȩ��N*/
				data[j] = tmp;           /*j�����ǥ�tmp��s��j+1���ȡA�F������*/
			}
		}
	}
	printf("�Ƨǧ���...\n");
	for (i = 0;i < 5;i++)
	{
		printf("%d ", data[i]);
	}

}