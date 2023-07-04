#include "lists.h"

/**
 * free_list -  function that frees a list_t list.
 * @head : list_t node to br free
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}

}
