#include "lists.h"

/**
 * free_list -  function that frees a list_t list.
 * @head : list_t node to br free
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *t;

	if (head == NULL)
		exit(0);
	while (head)
	{
	 	t = head->next);
		free(head->str);
		free(head);
	}
}
