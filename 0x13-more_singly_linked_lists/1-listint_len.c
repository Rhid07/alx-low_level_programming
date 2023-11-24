#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a lists
 * @h: linked list to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t counts = 0;

	while (h)
	{
		counts++;
		h = h->next;
	}

	return (counts);
}
