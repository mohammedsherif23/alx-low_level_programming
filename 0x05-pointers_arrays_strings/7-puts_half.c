#include "main.h"

/**
* puts_half - print half a string
* @str: string to be printed
* Return: void
*/

void puts_half(char *str)
{
	int count = 0;
	int i;

	while (*str)
	{
		count++;
		str++;
	}
	for (i = 0; i < count; i++)
		str--;
	i = (count % 2 == 0) ? count / 2 : (count + 1) / 2;
	for (; i < count; i++)
		_putchar(str[i]);

	_putchar('\n');
}
