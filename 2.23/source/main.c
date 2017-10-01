#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int p;
	int q;
	int r;
	printf("請輸入3個數字");
	scanf_s("%d%d%d",&p,&q,&r);
	if (p > q)
	{
		if (q>r)
		{
			printf("%d is the biggest\n %d is the smallest\n",p,r);
		}
	}
	if (q>p)
	{
		if (p>r)
		{
			printf("%d is the biggest\n %d is the smallest\n",q,r);
		}
	}
	if (r>p)
	{
		if (p>q)
		{
			printf("%d is the biggest\n %d is the smallest\n",r,q);
		}
	}
	if (r>q)
	{
		if (q>p)
		{
			printf("%d is the biggest\n %d is the smallest\n",r,p);
		}
	}
	if (q>r)
	{
		if (r>p)
		{
			printf("%d is the biggest\n %d is the smallest\n",q,p);
		}
	}
	if (p>r)
	{
		if (r>q)
		{
			printf("%d is the biggest\n %d is the smallest\n",p,q);
		}
	}
	
	system("pause");
	return 0;
}