#include "sort.h"
/**
 * selection_sort - sorts an array in ascending order
 * by seelecting the smallest element from the unsoretd list
 * in each iteration and places that element at the begining
 * of the unsorted list
 *
 * @array: array of integer
 * @size: number of elements in @array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

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
			temp = array[j];
			array[j] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}

