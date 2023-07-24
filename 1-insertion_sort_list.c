#include "sort.h"

void insertion_sort_list_swap(listint_t **first, listint_t **second);

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
	listint_t *current = NULL, *next = NULL, *next_sort = NULL;

	if (!list || !(*list) || !(*list)->next)
		return;

	current = *list;
	next = current->next;

	while (next)
	{
		if (current->n > next->n)
		{
			next_sort = next;
			while (next_sort->prev && next_sort->prev->n > next_sort->n)
			{
				insertion_sort_list_swap(&(next_sort->prev), &next_sort);
				print_list(*list);
				next_sort = next_sort->prev;
			}
		}
		current = next;
		next = current->next;
	}
}

/**
 * insertion_sort_list_swap - function that swaps two nodes
 * in a doubly linked list
 *
 * @first: first node to swap.
 * @second: second node to swap.
 *
 * Return: void
 */
void insertion_sort_list_swap(listint_t **first, listint_t **second)
{
	int *first_node = (int *)&((*first)->n);
	int *second_node = (int *)&((*second)->n);

	int tmp = *first_node;
	*first_node = *second_node;
	*second_node = tmp;
}

