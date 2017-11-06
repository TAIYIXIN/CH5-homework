#include<stdio.h>
#include<stdlib.h>
int lcm(int a,int b);
int main(void)
{
	int num1, num2;
	printf("叫块ㄢ俱计:");
	scanf_s("%d%d",&num1,&num2);
	printf("ㄢ俱计程そ计%d\n",lcm(num1,num2));
	system("pause");
}
int lcm(int a, int b)
{
	int s,c;
	s = a*b;
	while (b != 0)
	{
		c = a%b;
		a = b;
		b = c;
	}
	return s / a;
	
}


