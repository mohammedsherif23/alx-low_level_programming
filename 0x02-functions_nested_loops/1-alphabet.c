#include "main.h"
/**
* print_alphabet - print the alphabet a - z
* Return: void
*/
void print_alphabet(void)

{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}

