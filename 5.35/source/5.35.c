#include<stdio.h>
#include<stdlib.h>
unsigned long long int fibonacci(int n);
int main(void)
{

	unsigned  int n;
	printf("請輸入項數:");
	scanf_s("%d", &n);
	printf("費伯那契級數為:%llu\n", fibonacci(n));
	system("pause");
}
unsigned long long int fibonacci(unsigned  int n)
{

	unsigned  int i;
	unsigned long long  int f[1000];
	f[0] = 0;
	f[1] = 1;
	for (i = 0; i <= n -3; i++)
	{
		f[i + 2] = f[i] + f[i + 1];
		if (f[i+2] < f[i + 1])
		{
			return f[i+1];
		}
	}
	return f[i + 1];
}


