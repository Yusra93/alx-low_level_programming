#include "lists.h"

/**
 * free_list -  function that frees a list_t list.
 * @head : list_t node to br free
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node;

	if (head == NULL)
	{
		printf("freed!");
	}
		exit(0);
	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
