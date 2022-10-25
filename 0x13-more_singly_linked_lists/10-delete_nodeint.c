#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at an index of a listint_t list
 *
 * @head: pointer to pointer to the first element of the list
 * @index: index of node to be deleted
 *
 * Return: 1 if successful and 0 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr, *freon;

	ptr = *head;
	if (ptr == NULL)
		return (-1);
	for (i = 0; i < index && ptr->next != NULL; i++)
	{
		if (i > 0)
			ptr = ptr->next;
	}
	if (i != index)
		return (-1);
	if (index == 0)
	{
		freon = ptr;
		ptr = ptr->next;
		*head = ptr;
	}

	else
	{
		freon = ptr->next;
		ptr->next = ptr->next->next;
	}

	free(freon);
	return (1);
}
