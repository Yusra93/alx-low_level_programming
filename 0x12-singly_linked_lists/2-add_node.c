#include "lists.h"

/**
 * add_node -  function that adds a new node at the beginning of a list_t list.
 * @head : pointer to array of list_t nodes
 * @str : node value
 * Return: no of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int l = strlen(str);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}

	new_node->str = strdup(str);
	new_node->len = l + 1;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
