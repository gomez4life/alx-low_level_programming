#include "lists.h"

/**
 * print_listint - prints all the elements of a singly linked list
 * @h: pointer to first element of the list
 *
 * Return: amount of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;	/* declare value to hold number of nodes */

	while (h)		/* execute while h still holds a node */
	{
		printf("%d\n", h->n);	/* print data section of the list */
		h = h->next;	/* go the the next element of the list */
		i++;	/* increment value for amt of nodes each iteration */
	}

	return (i);	/* return value holding number of nodes */
}
