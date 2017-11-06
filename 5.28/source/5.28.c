#include<stdio.h>
#include<stdlib.h>
char convert(char a);
int main(void)
{
		char letter;
		printf("請輸入一個字母:");
		scanf_s("%c", &letter);
		printf("%c的相反為%c\n", letter, convert(letter));
		system("pause");
		return 0;
}
char convert(char a)
{
	if (a >= 65 && a <= 96)
	{
		a=a + 32;
	}
	else
	{
		a=a - 32;
	}
	return a;
}

