/*皚莱ノ:程程*/
#include <stdio.h>
#pragma warning (disable:4996)
void L4_4()
{
	int a[5];  /*俱计皚跑计き兜*/
	int i, max, min;
	for (i = 0;i < 5;i++) /*矪块き计皚い*/
	{
		printf("叫块计%d>>", i + 1);
		scanf("%d",&a[i]);
	}
	printf("块计>>");
	min = max = a[0]; /*盢maxmin砞暗ゑ耕*/
	for (i = 0;i < 5;i++) /*矪计ゑ耕计*/
	{
		printf("%d ", a[i]);
		if (a[i] >=max)
			max = a[i];
		if (a[i] <= min)
			min = a[i];
	}
	printf("程%d程%d", max, min);

}