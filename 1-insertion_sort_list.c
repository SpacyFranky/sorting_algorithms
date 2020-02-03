#include "sort.h"
#include <stdlib.h>
/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t **tmp;
	int i, l, array[];

	tmp = list;
	i = 0;
	while (tmp != NULL)
	{
		array[i] = tmp->n;
		tmp = tmp->next;
		i++;
	}
	l = i;
}
