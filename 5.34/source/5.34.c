#include<stdio.h>
#include<stdlib.h>
int integerPower(base, exponent);
int main(void)
{
	int a, b;
	printf("�п�J����:");
	scanf_s("%d",&a);
	printf("�п�J����:");
	scanf_s("%d", &b);
	printf("�ƭȬ�%d\n", integerPower(a,b));
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