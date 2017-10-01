#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1;
	int n2;
	int ans;

	printf("請輸入2個數字");
	scanf_s("%d%d",&n1,&n2);
	ans = n1 % n2;
	if (ans == 0)
	{
		printf("%d為%d的倍數",n1,n2);
	}
	if (ans != 0)
	{
		printf("n1不是n2的倍數");
	}
	


	system("pause");
	return 0;
}