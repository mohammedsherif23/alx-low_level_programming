#include "main.h"
/**
* print_square - prints a square in a terminal
*@size: size of the square to be printed
* Return: void
*/

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (size <= 0)
			{
				_putchar('\n');
			}
			_putchar('#');
		}
		_putchar('\n');
	}
}
