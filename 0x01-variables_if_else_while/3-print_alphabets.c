#include <stdio.h>
/**
* main - Program Entry point
* Return: 0 (success)
*/
int main(void)
{
	char alpha = 'a';
	char ch = 'A';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
