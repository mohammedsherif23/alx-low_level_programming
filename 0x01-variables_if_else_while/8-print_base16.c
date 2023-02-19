#include <stdio.h>
/**
* main - Program Entry point
* Return: 0 (success)
*/
int main(void)
{
	int n;
	int ch;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + (n % 10));
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
