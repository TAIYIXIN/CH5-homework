#include<stdio.h>
#include<stdlib.h>
char convert(char a);
int main(void)
{
		char letter;
		printf("�п�J�@�Ӧr��:");
		scanf_s("%c", &letter);
		printf("%c���ۤϬ�%c\n", letter, convert(letter));
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

