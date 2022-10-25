#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: pointer to pointer to the first element of the list
 *
 * Return: void
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *freon;

	if (head == NULL)
		return;
	freon = *head;
	while ((temp = freon) != NULL)
	{
		freon = freon->next;
		free(temp);
	}
	*head = NULL;
}

/**
 * free_listint_safe - prints a linked list
 * @h: head of a list
 *
 * Return: number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num_nodes = 0;
	listp_t *hptr, *new, *add;
	listint_t *now;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (num_nodes);
			}
		}
		now = *h;
		*h = (*h)->next;
		free(now);
		num_nodes++;
	}
	*h = NULL;
	free_listp2(&hptr);
	return (num_nodes);
}
