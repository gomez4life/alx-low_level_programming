#ifndef LISTS_H
#define LISTS_H

/* include header file for output fuctions like printf */
#include <stdio.h>
/* incluse header file for string manipulation */
#include <string.h>
/* include header file for memory allocation */
#include <stdlib.h>

/**
 * struct list_s - singly linked lists
 * @str: malloc'ed string
 * @len: length of string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
/* print all elements of linked list; return number of nodes */
size_t print_list(const list_t *h);
/* count number of elements of linked list return the amount */
size_t list_len(const list_t *h);
/* add elements to the beginning of the list; return address of element */
list_t *add_node(list_t **head, const char *str);
/* add elements to the end of the list; return address of element */
list_t *add_node_end(list_t **head, const char *str);
/* free a list_t list by calling free */
void free_list(list_t *head);

#endif /* LISTS_H*/
