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

	printf("每天行駛里程:");
	scanf_s("%d",&a);
	printf("每加侖價格:");
	scanf_s("%d",&b);
	printf("每加侖汽油行駛里程數:");
	scanf_s("%d",&c);
	printf("每天的停車費:");
	scanf_s("%d",&e);
	printf("每天的過路費:");
	scanf_s("%d",&f);
	total = e + f + (c / a)*b;
	printf("%d每天所耗的錢:",total);
	
	
	system("pause");
	return 0;
}