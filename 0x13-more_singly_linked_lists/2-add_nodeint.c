#include "lists.h"

/**
 * add_nodeint -  function that adds a new node at the beginning of a listint_t list.
 * @head : pointer to array of list_t nodes
 * @str : node value
 * Return: no of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	int l = strlen(str);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = l;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
