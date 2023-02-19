#include <stdio.h>
/**
* main - Program Entry point
* Return: 0 (success)
*/
int main(void)
{

	char alpha = 'a';

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
