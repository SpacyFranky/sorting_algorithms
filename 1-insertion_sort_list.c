#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: input of double linked list
**/
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL, *head = NULL, *prevtmp = NULL, *nexttmp = NULL;

	head = *list;
	tmp = *list;
	while (tmp)
	{
		if (tmp->next && tmp->n > tmp->next->n)
		{
			/**
			 * [] - [node] - [next-node] - []
			 *
			 **/
			nexttmp = tmp->next;
			tmp->next = tmp->next->next;
			prevtmp = tmp->prev;
			/* next node in prev node */
			tmp->prev = nexttmp;
			nexttmp->next = tmp;
			nexttmp->prev = prevtmp;
			prevtmp->next = nexttmp;
			tmp = head;
			print_list(tmp);
		}
		tmp = tmp->next;
	}
}
