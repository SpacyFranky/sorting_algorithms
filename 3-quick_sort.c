#include "sort.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 */
size_t partition(int *array, size_t l, size_t h)
{
	int pivot, x, y;
	size_t i, j;

	pivot = array[h];
	i = l - 1;
	for (j = l; j <= h - 1; j++)
	{
		if (pivot > array[j])
		{
			i++;
			x = array[i];
			array[i] = array[j];
			array[j] = x;
		}
	}
	y = array[i + 1];
	array[i + 1] = array[h];
	array[h] = y;
	return (i + 1);
}

/**
 *
 *
 *
 */
void quick(int *array, size_t l, size_t h)
{
	size_t p;

        if (l < h)
        {
                p = partition(array, l, h);
		quick(array, l, p - 1);
                quick(array, p + 1, h);
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
	quick(array, 0, size - 1);
}
