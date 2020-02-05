#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: input
 * @size: size of the array
 **/
void bubble_sort(int *array, size_t size)
{
	unsigned int tmp = 0, i = 0, b = 0;

	if (!size)
		return;

	for (b = 0; b < size; b++)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i + 1] && array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
