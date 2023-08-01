#include "lists.h"

/**
 * add_nodeint_end - to add a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to be inserted in the new element
 *
 * Return: pointer to the new node, or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnd;
	listint_t *temp = *head;
/* nnd is for new node*/
	nnd = malloc(sizeof(listint_t));
	if (!nnd)
		return (NULL);

	nnd->n = n;
	nnd->next = NULL;

	if (*head == NULL)
	{
		*head = nnd;
		return (nnd);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = nnd;

	return (nnd);
}
