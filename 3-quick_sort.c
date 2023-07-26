#include "sort.h"

int partition(int *array, int low, int high);
void quickSort(int *to_print, size_t size, int *array, int low, int high);

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
	quickSort(array, size, array, 0, size - 1);
}


/**
 * partition - Partitions an array using the last element as pivot.
 *
 * @array: Array to be partitioned.
 * @low: Index of the first element of the array.
 * @high: Index of the last element of the array.
 *
 * Return: Index of the pivot element after partition.
 */
int partition(int *array, int low, int high)
{
	int pivot = array[high], i = low, j = low, t = 0;

	for (i = low; i < high; i++)
	{
		if (array[i] < pivot)
		{
			t = array[i];
			array[i] = array[j];
			array[j] = t;
			j++;
		}
	}
	array[high] = array[j];
	array[j] = pivot;
	return (j);
}


/**
 * quickSort - Sorts an array using the Quick sort algorithm.
 *
 * @to_print: Array to print.
 * @size: size of array to print it.
 * @array: Array to be sorted.
 * @low: Index of the first element of the array.
 * @high: Index of the last element of the array.
 *
 * Return: void
 */
void quickSort(int *to_print, size_t size, int *array, int low, int high)
{
	if (low < high)
	{
		int pi = partition(array, low, high);

		print_array(to_print, size);

		quickSort(to_print, size, array, low, pi - 1);
		quickSort(to_print, size, array, pi + 1, high);
	}
}
