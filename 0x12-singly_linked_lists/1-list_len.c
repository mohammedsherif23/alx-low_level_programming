#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list
 * @list_t - input
 * @h: pointer
 * Return: 0 always
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
