/*�}�C����:���̤j�̤p*/
#include <stdio.h>
#pragma warning (disable:4996)
void L4_4()
{
	int a[5];  /*�ŧi��ư}�C�ܼơA�@����*/
	int i, max, min;
	for (i = 0;i < 5;i++) /*���B��J���Ӽƭȩ�}�C��*/
	{
		printf("�п�J�Ʀr%d>>", i + 1);
		scanf("%d",&a[i]);
	}
	printf("�w��J�Ʀr>>");
	min = max = a[0]; /*�Nmax�Bmin�]��ȥH�����*/
	for (i = 0;i < 5;i++) /*���B�C�X�ƭȨä���ƭȡC*/
	{
		printf("%d ", a[i]);
		if (a[i] >=max)
			max = a[i];
		if (a[i] <= min)
			min = a[i];
	}
	printf("�̤j�Ȭ�%d�A�̤p�Ȭ�%d", max, min);

}