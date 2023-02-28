#include "main.h"
/**
* puts2 - print every other character of a string
* @str: string to be printed
* Return: void
*/

void puts2(char *str)
{
	int num = 0;
	int i;

	while (*str)
	{
		num++;
		str++;
	}
	for (i = 0; i < num; i++)
		str--;
	for (i = 0; i < num; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
