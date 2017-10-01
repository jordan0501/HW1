#include<stdio.h>
#include<stdlib.h>
int main(void)
{	
	int num;
	
	printf("number	square	cube\n");
	for (num=0;num<=10;num++)
	{
		printf("%d	%d	%d\n",num,num*num,num*num*num);
	}
	



	system("pause");
	return 0;
}
