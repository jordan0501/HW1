#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	int ans;
	printf("�п�J�@�ӼƦr");
	scanf_s("%d", &num);
	ans = num % 2;
	
	if (ans == 0)
	{
		printf("���ƬO����");
	}
	if (ans != 0)
	{
		printf("���ƬO�_��");
	}



	system("pause");
	return 0;
}