#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
    int sum_of_elements = 0;
    listint_t *current_node = head;

    while (current_node != NULL)
    {
        sum_of_elements += current_node->n;
        current_node = current_node->next;
    }

    return (sum_of_elements);
}

