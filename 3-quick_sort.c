#include "sort.h"

/**
 * swapping - swaps two numbers
 * @a: first number
 * @b: second number
 */
void swapping(int *a, int *b)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

/**
 * partition - find partition position
 * @array: array of interger
 * @low: lower bound of array
 * @high: higher bound of array
 * @size: number of elememnts in @array
 *
 * Return: position of pivot
 **/
int partition(int *array, int low, int high, size_t size)
{
	/* elect the last right element as pivot*/
	int pivot = array[high];
	/* points to the greater element */
	int ptr = low;
	int j;
	/**
	 * traversing acreoss each element in an array and
	 * compare them with pivot
	 **/
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			if (ptr != j)
			{
				/** if elememnt smaller than pivot is found
				 * swap it with the greater element poited by i
				 **/
				swapping(&array[ptr], &array[j]);
				print_array(array, size);
			}
			ptr++;
		}
	}
	/*swap the pivot element with the greater element at i */
	if (ptr != high)
	{
		swapping(&array[ptr], &array[high]);
		print_array(array, size);
	}
	return (ptr);
}

/**
 * quicksort - find partition position
 * @array: array of interger
 * @low: lower bound of array
 * @high: higher bound of array
 * @size: number of elememnts in @array
 */
void quicksort(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quicksort(array, low, pivot - 1, size);
		quicksort(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - quick sorts an array
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}
