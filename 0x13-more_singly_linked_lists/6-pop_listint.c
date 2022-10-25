#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer to first element of the list
 *
 * Return: the data(int) contained in the head node or
 * 0 in case of empty linked list
 */
int pop_listint(listint_t **head)
{
	/* get the first element by going to next in head */
	/* save this into an int */
	int num;
	listint_t *freon, *ptr = *head;	/*declare variable to get needed node*/

	if (ptr == NULL)	/* if list is empty return 0 */
		return (0);
	freon = ptr;
	num = ptr->n;	/* save number to be cut into an integer */
	ptr = ptr->next;	/* move to the first element of list */
	*head = ptr;	/* set head to the address of next element */

	free(freon);

	return (num);	/* return removed number */
}
