#include "main.h"
/**
* _isalpha - check if a character is an alphabet
*@c: charcter to check
* Return: 1 if c is a alphabet if not Return 0
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
