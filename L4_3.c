/*#define ����(macro)����*/
#include <stdio.h>
#pragma warning(disable:4996)
#define SQUARE(a) a*a /*�w�qsquare�����A�ʧ@������*/
void L4_3()
{
	int n;
	printf("�п�Jn>>");
	scanf("%d", &n);
	printf("n�����謰%d", SQUARE(n));
}