#include "main.h"
/**
* _isdigit - check for a digit (0 through 9)
*@c: digit to check for
* Return: 0 always
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
