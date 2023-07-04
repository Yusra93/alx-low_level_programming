#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
list_t *head;

    head = NULL;
    add_node(&head, "Anne");
    add_node(&head, "Colton");
    add_node(&head, "Corbin");
    add_node(&head, "Daniel");
    add_node(&head, "Danton");
    add_node(&head, "David");
    add_node(&head, "Gary");
    add_node(&head, "Holden");
    add_node(&head, "Ntuj");
    add_node(&head, "Philip");
    add_node(&head, "Richard");
    add_node(&head, "Samantha");
    add_node(&head, "Stuart");
    add_node(&head, "Swati");
    add_node(&head, "Timothy");
    add_node(&head, "Victor");
    add_node(&head, "Walton");
    print_list(head);
   free_list(head);
    head = NULL; 
    return (0);
}

