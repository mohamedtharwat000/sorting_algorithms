#include "sort.h"

void quickSort(int *array, int low, int high, size_t size);

/**
 * quick_sort - Sorts an array of integers in ascending order
 *              using the Quick sort algorithm.
 *
 * @array: Array to be sorted.
 * @size: Size of the array.
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
	{
		return;
	}
	quickSort(array, 0, size - 1, size);
}

/**
 * quickSort - Sorts an array using the Quick sort algorithm.
 *
 * @array: Array to be sorted.
 * @low: Index of the first element of the array.
 * @high: Index of the last element of the array.
 * @size: size of array to print it.
 *
 * Return: void
 */
void quickSort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot = array[high], pivot_index = low, i, t;

		for (i = low; i < high; i++)
		{
			if (array[i] < pivot)
			{
				if (i != pivot_index)
				{
					t = array[i];
					array[i] = array[pivot_index];
					array[pivot_index] = t;
					print_array(array, size);
				}
				pivot_index++;
			}
		}

		if (array[pivot_index] != array[high])
		{
			t = array[high];
			array[high] = array[pivot_index];
			array[pivot_index] = t;
			print_array(array, size);
		}

		quickSort(array, low, pivot_index - 1, size);
		quickSort(array, pivot_index + 1, high, size);
	}
}
