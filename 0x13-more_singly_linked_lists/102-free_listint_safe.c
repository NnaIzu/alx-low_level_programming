#include "lists.h"

/**
 * free_listint_safe - to free a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: size of the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t lgh = 0;
	int fre;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		fre = *h - (*h)->next;
		if (fre > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lgh++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lgh++;
			break;
		}
	}

	*h = NULL;

	return (lgh);
}
