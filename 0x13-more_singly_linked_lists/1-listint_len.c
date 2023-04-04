#include "lists.h"
#include <stdio.h>

/**
* listint_len - retrun the number of elements in a listint_t
* @h: input
* Return: 0 always
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
