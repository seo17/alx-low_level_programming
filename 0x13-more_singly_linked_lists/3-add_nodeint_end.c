#include "lists.h"

/**
 * add_nodeint_end - Adds a new_node node at the
 *                   end of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: the address of the new_node element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node; 
	listint_t *end_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		end_node = *head;
		while (end_node->next != NULL)
			end_node = end_node->next;
		
		end_node->next = new_node;
	}
	return (*head);
}

