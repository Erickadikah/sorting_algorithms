#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the bubble sort algorithm
 *
 * @array: array to be sorted
 * @size: Size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	int i, newn, n, temp;

	if (array == NULL || size <= 1)
		return;
	n = size;
	while (n > 0)
	{
		newn = 0;
		for (i = 1; i < n; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				print_array(array, size);
				newn = i;
			}
		}
		n = newn;
	}
}

