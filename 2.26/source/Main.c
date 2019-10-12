#include<stdio.h>
#include<stdlib.h>
int num1, num2 ;
int main(void)
{
	scanf_s("%d%d", &num1, &num2);
	if (num1%num2==0)
	{
		printf("%d is a multiple of %d \n", num1,num2);
	}
	return 0;
}