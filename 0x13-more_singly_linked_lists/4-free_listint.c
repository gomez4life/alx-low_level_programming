#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the first element of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *freeptr;	/* create ptr to be used of frees */

	while ((freeptr = head) != NULL)
	{
		head = head->next;	/* assign head to next element of list*/
		free(freeptr);	/* free the memory for the node */
	}
}
