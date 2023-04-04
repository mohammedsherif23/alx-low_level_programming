#include "lists.h"
#include <stdio.h>

/**
* print_listint - print all elements
* @h: input
* Return: 0 always
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
