#include<stdio.h>
#include<stdlib.h>
int a, b, c, d, e,sum;
int main(void)
{
	printf("�@��Ѫ��`���{��\n");
	scanf_s("%d", &a);
	printf("�T�o�@����/�[�ڦh�ֿ�\n" );
	scanf_s("%d", &b);
	printf("�����@����/�[�گ��p�h�֤���\n" );
	scanf_s("%d", &c);
	printf("�@�Ѫ������O\n");
	scanf_s("%d", &d);
	printf("�@�Ѫ��q��O(�L���O)\n");
	scanf_s("%d", &e);
	sum = (a / c) * b + d + e;
	printf("�`��O:%d", sum);

}