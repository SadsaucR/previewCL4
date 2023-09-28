/*#define 巨集(macro)應用*/
#include <stdio.h>
#pragma warning(disable:4996)
#define SQUARE(a) a*a /*定義square巨集，動作為平方*/
void L4_3()
{
	int n;
	printf("請輸入n>>");
	scanf("%d", &n);
	printf("n的平方為%d", SQUARE(n));
}