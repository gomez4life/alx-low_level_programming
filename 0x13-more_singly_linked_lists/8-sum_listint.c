#include "lists.h"

/**
 * sum_listint - finds the sum of all data in a listint_t list
 * @head: pointer to the first element of the list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;	/* initialize sum to 0 */

	ptr = head;
	if (ptr == NULL)	/* return 0 if the list is empty */
		return (0);
	while (ptr)	/* do while there are other elements */
	{
		sum += ptr->n;	/* increase sum by each number int the list */
		ptr = ptr->next;	/* go to next element */
	}
	return (sum);	/* return the total sum */
}
