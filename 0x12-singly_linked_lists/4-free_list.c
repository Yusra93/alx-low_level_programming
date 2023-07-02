#include "lists.h"

/**
 * free_list -  function that frees a list_t list.
 * @head : pointer to array of list_t nodes
 * @str : node value
 * Return: no of nodes
 */
void free_list(list_t *head)
{
	free(head);
	head = NULL;
}
