#include "lists.h"

/**
 * free_listint -  function that frees a list_t list.
 * @head : list_t node to br free
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}

}
