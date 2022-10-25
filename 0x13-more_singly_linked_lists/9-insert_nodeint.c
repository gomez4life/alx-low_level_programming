#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 *
 * @head: pointer to the first element of the node
 * @idx: index at which node is to be added
 * @n: data to be entered into the new node
 *
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *inew;
	unsigned int i;

	inew = malloc(sizeof(listint_t));	/* create space for new node*/
	if (inew == NULL)
		return (NULL);
	inew->n = n;			/* set the data for the new node */

	ptr = *head;
	if (ptr == NULL && idx != 0)
		return (NULL);
	for (i = 0; i < idx && ptr->next != NULL; i++)
	{
		if (i > 0)
			ptr = ptr->next;	/*iterate through till index*/
	}
	if (i != idx)
		return (NULL);	/* return null if bad index */
	if (idx == 0)
	{
		inew->next = *head;
		*head = inew;
	}
	else
	{
		inew->next = ptr->next;	/* set node to point to next element */
		ptr->next = inew;	/* set next element to point to node */
	}

	return (inew);
}
