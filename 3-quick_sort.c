#include "sort.h"
#include <stdlib.h>

/**
 * partition - Lomuto partition scheme.
 * @array: the array that will be sorted.
 * @l: index of smaller element.
 * @h: index of last element.
 * @size: size of the array.
 * Return: index i.
 */
size_t partition(int *array, int l, int h, size_t size)
{
	int i, j, pivot, x, y;

	pivot = array[h];
	i = l;
	for (j = l; j <= h; j++)
	{
		if (pivot > array[j])
		{
			if (i != j)
			{
				x = array[i];
				array[i] = array[j];
				array[j] = x;
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != h)
	{
		y = array[i];
		array[i] = array[h];
		array[h] = y;
		print_array(array, size);
	}
	return (i);
}

/**
 * quick - sorts an array of integers in ascending order
 * using the Quick sort algorithm.
 * @array: the array that will be sorted.
 * @l: index of smaller element.
 * @h: index of last element.
 * @size: size of the array.
 */
void quick(int *array, int l, int h, size_t size)
{
	size_t p;

	if (array == NULL)
		return;

	if (l < h)
	{
		p = partition(array, l, h, size);
		quick(array, l, p - 1, size);
		quick(array, p + 1, h, size);
	}
}


/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm.
 * @array: the array that will be sorted.
 * @size: size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;

	quick(array, 0, size - 1, size);
}
