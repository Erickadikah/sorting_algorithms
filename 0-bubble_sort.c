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
	int i, newn, n;

	n = size;
	while (n > 0)
	{
		newn = 0;
		for (i = 1; i < n; i++)
		{
			if (array[i - 1] > array[i])
			{
				swapping(&array[i - 1], &array[i]);
				print_array(array, size);
				newn = i;
			}
		}
		n = newn;
	}
}
/**
 * swapping - function that swaps two integers
 * @a: first integer
 * @b: second integer
 */
void swapping(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
