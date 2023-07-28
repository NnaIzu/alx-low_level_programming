#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a linked list
 * @h: pointer to the linked list
 * Return: number of printed nodes
 *
 */

size_t print_list(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
	if (!h->str)
		printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	l++;
	}

	return (l);
}
