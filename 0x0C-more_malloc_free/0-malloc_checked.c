#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* *malloc_checked - function that allocate memory
* @b: input
* Return: poiter
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
