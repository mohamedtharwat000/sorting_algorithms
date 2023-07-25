#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 *
 * @array: array to sort.
 * @size: array size.
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, lowest = 0;
	int tmp = 0;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		lowest = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[lowest])
			{
				lowest = j;
			}
		}

		if (lowest != i)
		{
			tmp = array[i];
			array[i] = array[lowest];
			array[lowest] = tmp;
			print_array(array, size);
		}
	}
}
