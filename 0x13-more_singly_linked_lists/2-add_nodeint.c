#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a list
 * @head: pointer to pointer to the beginning of the list
 * @n: data to be added to the beginning of the list
 *
 * Return: address of new element or null if failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int a = n;	/* declare integer to hold input number */
	/* create new node and space for new node */
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)	/* return null if malloc fails */
		return (NULL);

	ptr->n = a;	/* input the required value into data part of node */
	ptr->next = *head;	/* set address to that of prev first node */
	*head = ptr;	/* set address of head to that of new first node */

	return (*head);	/* return address of new first node */
}
