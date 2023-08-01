#include "lists.h"

/**
 * get_nodeint_at_index - to return the nth node of a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: NULL if the nodes does not exist, otherwise, return pointer
 * to the node sought.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *temp = head;

	while (temp && n < index)
	{
		temp = temp->next;
		n++;
	}

	return (temp ? temp : NULL);
}
