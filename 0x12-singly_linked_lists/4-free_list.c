#include "lists.h"
#include <stdlib.h>

/**
 * free_list - to free a linked list
 * @head: the list_t list to be freed
 * Return: (0)
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
