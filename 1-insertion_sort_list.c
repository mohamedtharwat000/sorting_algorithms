#include "sort.h"

void insertion_sort_list_swap(listint_t *current, listint_t *next);

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 *
 * @list: list to sort.
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *next = NULL, *current_prev = NULL;
	int sorted = 0;

	if (!list || !(*list) || !(*list)->next)
		return;

	current = *list;
	next = current->next;

	while (next)
	{
		sorted = 1;
		if (current->n > next->n)
		{
			sorted = 0;
			insertion_sort_list_swap(current, next);
			current_prev = current;
			while (current_prev->prev)
			{
				if (current_prev->n < current_prev->prev->n)
				{
					insertion_sort_list_swap(current, next);
				}
				current_prev = current_prev->prev;
			}
		}
		if (sorted == 1)
			return;
		current = next;
		next = next->next;
	}
}

/**
 * insertion_sort_list_swap - function that swaps two nodes
 * in a doubly linked list
 *
 * @current: first node to swap.
 * @next: second node to swap.
 *
 * Return: void
 */
void insertion_sort_list_swap(listint_t *current, listint_t *next)
{
	if (!current || !next)
		return;

	if (next->next)
		next->next->prev = current;
	next->prev = current->prev;
	current->prev = next;

	if (current->prev)
		current->prev->next = next;
	current->next = next->next;
	next->next = current;
}
