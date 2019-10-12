#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;
	scanf_s("%d", &x);
	if ((x % 2) == 0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}