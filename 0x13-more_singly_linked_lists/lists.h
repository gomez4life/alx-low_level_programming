#ifndef LISTS_H
#define LISTS_H

/* include header file to get printf function */
#include <stdio.h>
/* header file to get sizeof operator and malloc */
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct listp_s - singly linked list
 * @p: pointers to nodes
 * @next: points to the next node
 *
 * Description: singly linked list of pointers
 */
typedef struct listp_s
{
	void *p;
	struct listp_s *next;
} listp_t;

/* prints all the elements of a listint_t list. Return no. of nodes */
size_t print_listint(const listint_t *h);
/* finds number of elements int a listint_t list. Return no of elements */
size_t listint_len(const listint_t *h);

/* add node to the beginning of the list. Return address of new node / null */
listint_t *add_nodeint(listint_t **head, const int n);
/* add node to the end of the list. Return address of new node / null */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* free a listint_t linked list */
void free_listint(listint_t *head);
/* free a listint_t linked list and set head to NULL */
void free_listint2(listint_t **head);

/* delete the head node of a listint_t list. Return data prev stored / 0 */
int pop_listint(listint_t **head);
/* finds the nth node of a listint_t list and return it */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* find the sum of all data of a listint_t list. Return the sum */
int sum_listint(listint_t *head);
/* inserts a new node at a given position. Return new node address */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/* deletes a node at a given position. Return 1 for success, -1 otherwise */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/* reverses a listint_t list. Return pointer to first node of reversed list*/
listint_t *reverse_listint(listint_t **head);
/* finds the loop in a list. Return pointer to the beginning of loop */
listint_t *find_listint_loop(listint_t *head);

/* prints a listint_t list in safe mode */
size_t print_listint_safe(const listint_t *head);
/* frees a listint_t in safe mode */
size_t free_listint_safe(listint_t **h);

#endif /*LISTS_H*/
