#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: pointer to first element of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *freer;	/* declare pointer to be used for freeing */

	if (head != NULL)	/* only do if head is not yet set to NULL */
	{
		while ((freer = *head) != NULL)	/*while unfreed nodes exist*/
		{
			*head = (*head)->next;	/* set head to next element */
			free(freer);	/* free memory allocated to element */
		}
		*head = NULL;	/* set head to NULL */
	}
}
