#include "main.h"
/**
* print_diagonal - print a diagonal line in the terminal
*@n: number of time \ should be printed
* Return: void
*/

void print_diagonal(int n)
{
	int l;
	int j;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (j = 0; j < l; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (l == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}

