#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	int b;
	int c;
	int e;
	int f;
	int total;

	printf("�C�Ѧ�p���{:");
	scanf_s("%d",&a);
	printf("�C�[�ڻ���:");
	scanf_s("%d",&b);
	printf("�C�[�ڨT�o��p���{��:");
	scanf_s("%d",&c);
	printf("�C�Ѫ������O:");
	scanf_s("%d",&e);
	printf("�C�Ѫ��L���O:");
	scanf_s("%d",&f);
	total = e + f + (c / a)*b;
	printf("%d�C�ѩүӪ���:",total);
	
	
	system("pause");
	return 0;
}