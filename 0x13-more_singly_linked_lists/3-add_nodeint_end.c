#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a listint_t linked list.
 * @head: pointer to pointer to first element of the list
 * @n: numeric data to be added to the list
 *
 * Return: address of new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int a = n;
	/* declare end as new node & iterator as pointer to get to last node */
	listint_t *end, *iterator;

	/* allocate memory for the data to be contained in the node */
	end = malloc(sizeof(listint_t));
	if (end == NULL)	/* return NULL if malloc fails */
		return (NULL);

	end->n = a;	/* input data into data portion of new end node */
	end->next = NULL;	/* set next address in end to null */

	iterator = *head;	/* assign address of first node to iterator */

	if (iterator == NULL)	/* if no address set head to end */
		*head = end;
	else
	{
		while (iterator->next)	/* execute while address is in next */
			iterator = iterator->next;	/* to next element */
		iterator->next = end;	/* change to address of node end */
	}				/* signifies end of linked list */

	return (end);	/* return address of new element */
}
