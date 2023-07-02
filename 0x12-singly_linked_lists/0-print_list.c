#include "lists.h"

/**
 * print_list -  function that prints all the elements of a list_t list.
 * @h : list_t pointer
 * Return: no of nodes
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		printf("[%d] ", h->str ? h->len : 0);
		printf("%s", h->str ? h->str : "(nil)");
		printf("\n");
		h = h->next;
		x++;
	}
	return (x);
}
