#include "sort.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 */
size_t partition(int *array, size_t l, size_t h, size_t size)
{
	int pivot, x, y;
	size_t i, j;

	pivot = array[h];
	i = l;
	for (j = l; j <= h; j++)
	{
		if (pivot > array[j])
		{
			x = array[i];
			array[i] = array[j];
			array[j] = x;
			i++;
		}
	}
	y = array[i];
	array[i] = array[h];
	array[h] = y;
	print_array(array, size);
	return (i);
}

/**
 *
 *
 *
 */
void quick(int *array, size_t l, size_t h, size_t size)
{
	size_t p;

        if (l < h)
        {
                p = partition(array, l, h, size);
		quick(array, l, p - 1, size);
                quick(array, p + 1, h, size);
	}
}


/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: the array that will be sorted.
 * @size: size of the array.
 */
void quick_sort(int *array, size_t size)
{
	quick(array, 0, size - 1, size);
}
