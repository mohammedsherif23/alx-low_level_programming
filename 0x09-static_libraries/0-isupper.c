#include "main.h"
/**
* _isupper - print uppercase character
*@c: character to print
* Return: 0 always
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
