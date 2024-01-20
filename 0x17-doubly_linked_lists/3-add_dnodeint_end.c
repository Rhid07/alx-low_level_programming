#include "lists.h"

/**
 * add_dnodeint_end - Add node in the end of the list
 * @head: Memory address of the head of the list
 * @n: Integer data
 *
 * Return: Head of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *last = *heads;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*heads == NULL)
	{
		*heads = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;
	new->prev = last;
	return (new);
}
