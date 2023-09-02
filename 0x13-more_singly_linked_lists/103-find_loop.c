#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowly = head;
	listint_t *quickly = head;

	if (!head)
		return (NULL);

	while (slowly && quickly && quickly->next)
	{
		quickly = quickly->next->next;
		slowly = slowly->next;
		if (quickly == slowly)
		{
			slowly = head;
			while (slowly != quickly)
			{
				slowly = slowly->next;
				quickly = quickly->next;
			}
			return (quickly);
		}
	}

	return (NULL);
}
