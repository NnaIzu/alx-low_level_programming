#include "lists.h"

/**
 * delete_nodeint_at_index - to delete a node at index of a
 * linked list.
 * @head: pointer to the first element in the list
 * @index: index of the node to be deleted
 *
 * Return: 1, on Success, or -1 Failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int u = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (u < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		u++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
