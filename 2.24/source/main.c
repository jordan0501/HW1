#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	int ans;
	printf("叫块计");
	scanf_s("%d", &num);
	ans = num % 2;
	
	if (ans == 0)
	{
		printf("计琌案计");
	}
	if (ans != 0)
	{
		printf("计琌计");
	}



	system("pause");
	return 0;
}