#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: pointer to pointer to the first element of the list
 *
 * Return: void
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - prints a linked list
 * @head: head of a list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (num_nodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num_nodes++;
	}
	free_listp(&hptr);
	return (num_nodes);
}
