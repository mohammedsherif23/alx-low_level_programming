#include "main.h"
/**
* _islower - check for lowercase letter
*@c: check for the character c
* Return: 1 if c is lowercase, Return 0 if not
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
