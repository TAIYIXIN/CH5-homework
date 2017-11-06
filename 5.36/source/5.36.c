#include<stdio.h>
#include<stdlib.h>
char hanoi(int n,char A ,char B,char C);

int main(void)
{
	int a;
	printf("請輸入要移動的碟子數");
	scanf_s("%d",&a);
	hanoi(a, 'A', 'B', 'C');
	system("pause");
}
char hanoi(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("%c -> %c\n", A, C);
	}
	else
	{
		hanoi(n - 1, A, C, B);
		hanoi(1, A, B, C);
		hanoi(n - 1, B,A ,C );

	}

}
