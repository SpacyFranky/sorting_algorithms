#include "sort.h"
#include <stdlib.h>

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm.
 * @array: the array that will be sorted.
 * @size: size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int s, x;

	if (array == NULL)
		return;

	n = size;
	do {
		s = 0;
		for (i = 1; i < n; i++)
		{
			if (array[i] < array[i - 1])
			{
				x = array[i - 1];
				array[i - 1] = array[i];
				array[i] = x;
				print_array(array, size);
				s = 1;
			}
		}
		n = n - 1;
	} while (s != 0);
}
