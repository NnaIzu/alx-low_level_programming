#include "lists.h"

/**
 * insert_nodeint_at_index - to insert a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index of list where new node should be added
 * @n: data to be inserted in the new node
 *
 * Return: pointer to the new node, or NULL at failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int u;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (u = 0; temp && u < idx; u++)
	{
		if (u == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}