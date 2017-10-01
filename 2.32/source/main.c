#include<stdio.h>
#include<stdlib.h>
int main()
{
	float kg;
	float m;
	float BMI;
	printf("輸入你的體重(公斤)和身高(公尺)\n");
	scanf_s("%f%f*%f",&kg,&m,&m);
	BMI = kg / m / m;
	printf("%f\n",BMI);
	if (BMI<18.5)
	{
		printf("Unerweight: less than 18.5\n");
	}
	if (BMI>=18.5)
	{
		if (BMI<=24.9)
		{
			printf("Normal: between 18.5 and 24.9");
		}
	}
	if (BMI>=25)
	{
		if (BMI<=29.9)
		{
			printf("Overweight: between 25 and 29.9");
		}
	}
	if (BMI>=30)
	{
		printf("Obese: 30 or greater");
	}

	system("pause");
	return 0;
	 
}