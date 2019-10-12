#include<stdio.h>
#include<stdlib.h>
int a, b, c, d, e,sum;
int main(void)
{
	printf("一整天的總里程數\n");
	scanf_s("%d", &a);
	printf("汽油一公升/加侖多少錢\n" );
	scanf_s("%d", &b);
	printf("平均一公升/加侖能行駛多少公里\n" );
	scanf_s("%d", &c);
	printf("一天的停車費\n");
	scanf_s("%d", &d);
	printf("一天的通行費(過路費)\n");
	scanf_s("%d", &e);
	sum = (a / c) * b + d + e;
	printf("總花費:%d", sum);

}