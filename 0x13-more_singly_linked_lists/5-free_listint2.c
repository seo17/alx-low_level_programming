#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node = *head;
	listint_t *next;

	while (current_node != NULL) 
	{
		next = current_node->next;

		free(current_node);

		current_node = next;
	}

	head = NULL;
}

