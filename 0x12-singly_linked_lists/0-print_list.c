#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all elements of a list_t list
 * @list_t - input
 * @h: pointer
 * Return: 0 always
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		count++;
	}
	return (count);
}

