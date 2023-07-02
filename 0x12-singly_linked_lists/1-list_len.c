#include "lists.h"

/**
 * list_len -  unction that returns the number of elements in a linked list_t list.
 * @h : list_t pointer
 * Return: no of nodes
 */
size_t list_len(const list_t *h)
{
	size_t x;

	while (h != NULL)
	{
/*		printf("[%d] ", h->str ? h->len : 0);
		printf("%s", h->str ? h->str : "(nil)");
		printf("\n"); */
		h = h->next;
		x++;
	}
	return (x);
}
