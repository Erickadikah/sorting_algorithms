#include "sort.h"

/**
 * swapping - swap two intergers in an array.
 * @a: the first interger to swap.
 * @b: The second interger to swap.
 */
void swapping(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

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
			swapping(&array[min], &array[i]);
			print_array(array, size);
		}
	}
}
