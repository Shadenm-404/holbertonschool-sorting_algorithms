#include "sort.h"

/**
 * swap_adjacent - Swap two adjacent nodes (left, right) in a doubly linked list
 * @list: Address of head pointer
 * @left: Left node (must be directly before right)
 * @right: Right node
 */
static void swap_adjacent(listint_t **list, listint_t *left, listint_t *right)
{
	left->next = right->next;
	if (right->next)
		right->next->prev = left;

	right->prev = left->prev;
	if (left->prev)
		left->prev->next = right;
	else
		*list = right;

	right->next = left;
	left->prev = right;
}

/**
 * insertion_sort_list - Sorts a doubly linked list using Insertion sort
 * @list: Address of head pointer
 *
 * Description: Swaps nodes (not values). Prints list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cur, *next_save;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (cur = (*list)->next; cur; cur = next_save)
	{
		next_save = cur->next;
		while (cur->prev && cur->prev->n > cur->n)
		{
			swap_adjacent(list, cur->prev, cur);
			print_list(*list);
		}
	}
}
