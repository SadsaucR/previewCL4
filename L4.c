/*�e�m�B�z���]�t#include�B#define�o����b�D�{���e�����O*/
/*#define����*/
#include<stdio.h>
#define PI 3.14 /*�NPI�w�q��3.14*/
float area(int r)
{
	return r * r * PI;
}
float peri(int r)
{
	return 2 * r * PI;
}
void L4()
{
	printf("PI=%f\n", PI);
	printf("�b�|��4�A�ꭱ�n��%f�A�P����%f",area(4),peri(4));
}