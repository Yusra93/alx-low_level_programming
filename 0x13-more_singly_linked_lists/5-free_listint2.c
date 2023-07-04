#include "lists.h"

/**
 * free_listint2 -  function that frees a listint_t list.
 * @head : listint_t node to be free
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while ((*head))
	{
		current = (*head);
		*head = (*head)->next;
		free(current);
	}
	head = NULL;
}
