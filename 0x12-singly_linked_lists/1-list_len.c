#include "lists.h"

/**
 * list_len -  unction that returns the number
 * of elements in a linked list_t list.
 * @h : list_t pointer
 * Return: no of nodes
 */
size_t list_len(const list_t *h)
{
	size_t x;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
