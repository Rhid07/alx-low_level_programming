#include "lists.h"

/**
 * print_list - function that prints all the elements of a linked list
 * @h: list to be printed
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	for (count = 1; h->next != NULL; count++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);

	return (count);
}

