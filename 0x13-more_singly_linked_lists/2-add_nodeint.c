#include "lists.h"

/**
 * add_nodeint - Adds a new_node node at the beginning
 * of a listint_t list.
 * @head: A double pointer to the address of the
 * head pointer of the listint_t list.
 * @n: The integer value of the new node to contain.
 *
 * Return: Address of new_node element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

