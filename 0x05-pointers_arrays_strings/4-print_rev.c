#include "main.h"

/**
* print_rev - prints a string in reverse, follow by a new line
* @s: string to be reverse
* Return: always 0
*/
void print_rev(char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}
	while (count)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar('\n');
}
