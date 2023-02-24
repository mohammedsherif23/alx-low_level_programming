#include "main.h"
/**
* print_line - prints a line in the terminal
*@n: Is the number time _ should be printed
* Return: void
*/

void print_line(int n)
{
	char l;

	for (l = 1; l <= n; l++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}

