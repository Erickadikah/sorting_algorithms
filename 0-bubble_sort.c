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
	int i, j;

	for (i = size - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapping(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
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
