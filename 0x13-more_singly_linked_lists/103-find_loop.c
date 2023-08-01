#include "lists.h"

/**
 * find_listint_loop - to find the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts,
 * or NULL if none
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *find = head;
	listint_t *loop = head;

	if (!head)
		return (NULL);

	while (find && loop && loop->next)
	{
		loop = loop->next->next;
		find = find->next;
		if (loop == find)
		{
			find = head;
			while (find != loop)
			{
				find = find->next;
				loop = loop->next;
			}
			return (loop);
		}
	}

	return (NULL);
}
