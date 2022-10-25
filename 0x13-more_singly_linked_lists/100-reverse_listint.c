#include "lists.h"

/**
 * reverse_listint - reverses the order of elements in a listint_t list
 *
 * @head: pointer to a pointer to the first element of the list
 *
 * Return: pointer to the first element of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	/* create a pointer to temporarily store addresses */
	/* create a  pointer to the first element of the new list */
	/* temporarily store the addresses in temp & */
	listint_t *prev;
	listint_t *next;

	prev = NULL;
	next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;	/*set to point to next node of list*/
		(*head)->next = prev;	/*set head next to prev address*/
		prev  = *head;	/* set prev address to head */
		*head = next;	/* set head to the next address */
	}
	*head = prev;	/* set head to prev address not null */
	return (*head);
}
