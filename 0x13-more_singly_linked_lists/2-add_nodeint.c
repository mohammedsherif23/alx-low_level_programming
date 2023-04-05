#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - add a new node at the beginning of a list_t list
*@head: first node
*@n: input
* Return: 0 always
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
