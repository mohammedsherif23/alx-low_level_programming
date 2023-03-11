 #include "main.h"

/**
* _puts - print a string, follow by a new line
* @str: string to be printed
* Return: void
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
