#include "lists.h"

/**
 * print_list - print all elements of linked list
 * @h: pointer to a nodal struct
 *
 * Return: number of nodes in list
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
