#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of a listint_t list
 * @head: pointer to the first element of the list
 * @index: index of the node starting at 0
 *
 * Return: the nth node of the list or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;

	ptr = head;
	if (ptr == NULL)	/* if node does not exist return NULL */
		return (NULL);
	for (i = 0; i < index && ptr; i++)	/* go through till index */
	{
		ptr = ptr->next;	/* set pointer to next element */
	}

	if (i == index)
		return (ptr);
	return (NULL);	/* return NULL if the node does not exist */
}
