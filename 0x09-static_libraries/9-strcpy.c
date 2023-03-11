#include "main.h"

/**
* _strcpy - print a string pointed to by src
* @dest: string  destination
* @src: string to copy
*Return: alway 0
*/

char *_strcpy(char *dest, char *src)
{
	int num = 0;
	int i;

	while (*src)
	{
		src++;
		num++;
	}
	for (i = 0; i < num; i++)
		src--;
	for (i = 0; i < num; i++)
	{
		dest[i] = *src;
		src++;
	}
	dest[i] = *src;
	return (dest);
}
