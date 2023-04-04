#include "lists.h"

/**
 * print_listint - print all the element in listint_s list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	while (h)
	{

	printf("%d\n", h->n);
	num++;
	h = h->next;

	}
	return(num);

}
