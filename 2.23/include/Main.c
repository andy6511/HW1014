#include<stdio.h>
#include<stdlib.h>
int num1, num2, num3, max, min;
int main(void)
{
	scanf_s("%d%d%d", &num1, &num2, &num3);
	max = num1;
	min = num3;
	if (num2 > max)
	{
		max = num2;
	}
	if (num3 > max)
	{
		max = num3;
	}
	if (num2 < min)
	{
		min = num2;
	}
	if (num1 < min)
	{
		min = num3;
	}
	printf("max=%d\n", max);
	printf("min=%d\n", min);

}