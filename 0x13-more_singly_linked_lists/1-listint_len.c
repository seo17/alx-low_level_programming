#include "lists.h"

/**
 * listint_len - returns the length of a linked list.
 * @h: head of a list.
 *
 * Return: numbers of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t element_counter = 0;

	while (h != NULL)
	{
		h = h->next;

		element_counter++;
	}

	return (element_counter);
}

