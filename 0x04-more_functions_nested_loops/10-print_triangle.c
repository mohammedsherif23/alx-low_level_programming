#include "main.h"
/**
* print_triangle - prints a triangle
* @size: the size of the triangle
*/

void print_triangle(int size)
{
	int i;
	int n;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (n = size - i; n > 0; n--)
			{
				_putchar(' ');
			}
			for (n = 0; n < i; n++)
			{
				_putchar('#');
			}
			if (i == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
