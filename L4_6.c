/*�}�C����3:�˧�(�o�Ө���Ƨǧ�²��A�]�����ζi��P�_)*/
#include <stdio.h>
void L4_6()
{
	int data[5] = { 5,72,81,54,61 };
	int i, j, tmp;
	printf("�˧ǫe>>");
	for (i = 0;i < 5;i++)
		printf("%d ", data[i]);
	printf("\n");
	/*�H�U�}�l�Ƨ�(��w�ƧǪk)*/
	for (i = 1;i < 5;i++) /*��������*/
	{
		for (j = 0;j < 5 - i;j++)
		{
			tmp=data[j];
			data[j] = data[j + 1];
			data[j + 1] = tmp;
		}
	}
	printf("��ǫ�>>");
	for (i = 0;i < 5;i++)
		printf("%d ", data[i]);
	printf("\n");
}