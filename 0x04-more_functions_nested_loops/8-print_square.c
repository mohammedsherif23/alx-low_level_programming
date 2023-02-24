#include "main.h"
/**
* print_square - prints a square in a terminal
*@size: size of the square to be printed
* Return: void
*/

void print_square(int size)
{
	char i;

	for (i = 0; i < size; i++)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
		_putchar('#');
	}
	_putchar('\n');
}

