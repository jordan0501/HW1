#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1;
	int n2;
	int ans;

	printf("�п�J2�ӼƦr");
	scanf_s("%d%d",&n1,&n2);
	ans = n1 % n2;
	if (ans == 0)
	{
		printf("%d��%d������",n1,n2);
	}
	if (ans != 0)
	{
		printf("n1���On2������");
	}
	


	system("pause");
	return 0;
}