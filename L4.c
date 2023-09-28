/*前置處理器包含#include、#define這類放在主程式前的指令*/
/*#define應用*/
#include<stdio.h>
#define PI 3.14 /*將PI定義為3.14*/
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
	printf("半徑為4，圓面積為%f，周長為%f",area(4),peri(4));
}