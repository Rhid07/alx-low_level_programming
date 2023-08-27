#include "lists.h"

/**
 * print_list - function that prints all the elements of a linked list
 * @h: list to be printed
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("list is empty\n");
	}

	while (h)
	{
		printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}

	return count;
}

