#include <stdio.h>
/**
* main - Program Entry point
* Return: 0 (success)
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
