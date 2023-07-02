#include "lists.h"

/**
 * free_list -  function that frees a list_t list.
 * @head : list_t node to br free
 * Return: void
 */
void free_list(list_t *head)
{
	free(head->str);
	free(head);
}
