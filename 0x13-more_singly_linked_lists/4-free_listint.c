#include "lists.h"

/**
 * free_listint - Free a listint_t list.
 * @head: Pointer to the head of the listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

