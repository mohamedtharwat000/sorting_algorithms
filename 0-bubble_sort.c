#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 *
 * @array: array to sort.
 * @size: size of the array.
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp, sorted;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		sorted = 1;
		for (j = 0; j < (size - 1) - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				sorted = 0;
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
		if (sorted == 1)
			return;
	}
}
