#include "lists.h"

/**
 * add_node_end -  function that adds a new node at the end of a list_t list.
 * @head : pointer to array of list_t nodes
 * @str : node value
 * Return: no of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;
	int l = strlen(str);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = l;
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
