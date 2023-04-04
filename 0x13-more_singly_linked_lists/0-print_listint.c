#include "lists.h"

/**
 * print_listint - print all the element in listint_s list
 * @h: linked list of type listint_t to print
 * 
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	while (h != NULL)
	{

	printf("%d\n", h->n);
	num++;
	h = h->next;

	}
	return(num);

}
