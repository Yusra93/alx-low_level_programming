#include "lists.h"

/**
 * print_listint -  function that prints all the elements of a listint_t list.
 * @h : list_t pointer
 * Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		printf("\n");
		h = h->next;
		x++;
	}
	return (x);
}
