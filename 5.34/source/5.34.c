#include<stdio.h>
#include<stdlib.h>
int integerPower(base, exponent);
int main(void)
{
	int a, b;
	printf("請輸入底數:");
	scanf_s("%d",&a);
	printf("請輸入指數:");
	scanf_s("%d", &b);
	printf("數值為%d\n", integerPower(a,b));
	system("pause");
}
int integerPower(base, exponent)
{
	int result;
	if (exponent >=1)
	{
		result = base* integerPower(base,(exponent-1));
		return result;
	}
	else
	{
		return 1;
	}
      
}