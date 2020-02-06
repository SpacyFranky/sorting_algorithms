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

	if (list == NULL || *list == NULL)
		return;
	while (tmp)
	{
		if (tmp->prev && tmp->prev == head && tmp->prev->n > tmp->n)
		{
			nexttmp = tmp->next;
			prevtmp = tmp->prev;
			tmp->next = prevtmp;
			tmp->prev = NULL;
			prevtmp->next = nexttmp;
			prevtmp->prev = tmp;
			nexttmp->prev = prevtmp;
			head = tmp;
			tmp = head;
			print_list(tmp);
		}

		else if (tmp->next && tmp->n > tmp->next->n)
		{
			nexttmp = tmp->next;
			prevtmp = tmp->prev;
			tmp->next = tmp->next->next;
			tmp->prev = nexttmp;
			nexttmp->next = tmp;
			nexttmp->prev = prevtmp;
			if (nexttmp->next->next)
				nexttmp->next->next->prev = tmp;
			prevtmp->next = nexttmp;
			tmp = head;
			print_list(tmp);
		}
			tmp = tmp->next;
	}
	*list = head;
}
