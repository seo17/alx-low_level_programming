#include "lists.h"

/**
 * pop_listint - Deletes head node of a listint_t list.
 * @head: Pointer to a pointer that hold address of the head of the listint_t list.
 * Return: if not empty, the head node data - n
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int node_int_value;

	if (*head == NULL)
		return (0);

	tmp = *head;
	node_int_value = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (node_int_value);
}


