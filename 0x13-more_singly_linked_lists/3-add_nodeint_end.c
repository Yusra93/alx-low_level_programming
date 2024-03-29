#include "lists.h"

/**
 * add_nodeint_end -  function that adds a new node at
 * the end of a list_t list.
 * @head : pointer to array of list_t nodes
 * @n : node value
 * Return: no of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
