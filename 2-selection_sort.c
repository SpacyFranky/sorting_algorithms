#include "sort.h"
#include <stdlib.h>
#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm.
 * @array: array that will be sorted.
 * @size: size of the array.
 */
void selection_sort(int *array, size_t size)
{
	int x;
	size_t i, j, min;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			x = array[i];
			array[i] = array[min];
			array[min] = x;
			print_array(array, size);
		}
	}
}
