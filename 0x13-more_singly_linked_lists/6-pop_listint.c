#include "lists.h"

/**
 * pop_listint - to delete the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: 0, if the list is empty, otherwise return the data
 * inside the elements that was deleted.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int hnd; /*hnd is the head node*/

	if (!head || !*head)
		return (0);

	hnd = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (hnd);
}
