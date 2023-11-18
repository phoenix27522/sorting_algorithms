#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @h: A pointer to the head of the doubly-linked list.
 * @node1: A pointer to the first node to swap.
 * @node2: The second node to swap.
 */
void swap_nodes(listint_t **list, listint_t **node1, listint_t *node2)
{
	listint_t *temp = node2->next;

	if (*node1 == node2)
	{
		(*node1)->next = temp;

		if (temp != NULL)
			temp->prev = *node1;
		node2->next = *node1;
		node2->prev = (*node1)->prev;
		(*node1)->prev = node2;
		*node1 = node2;
	}
	else
	{
		(*node1)->prev->next = node2;
		node2->prev = (*node1)->prev;
		(*node1)->next = temp;

		if (temp != NULL)
			temp->prev = *node1;
		node2->next = *node1;
		(*node1)->prev = node2;
		*node1 = node2;
	}
	if (node2->prev == NULL)
		*list = node2;
}
/**
 * cocktail_sort_list - Sort a doubly linked list using Cocktail shaker sort.
 * @list: Pointer to the head of the doubly linked list.
 */
void cocktail_sort_list(listint_t **list)
{
	int swapped = 1;
	listint_t *start = NULL;
	listint_t *end = NULL;

	if (list == NULL || *list == NULL)
		return;
	while (swapped)
	{
		swapped = 0;
		start = (*list);
		while (start->next != end)
		{
			if (start->n > start->next->n)
			{
				swap_nodes(list, &start, start->next);
				print_list(*list);
				swapped = 1;
			}
			else
			{
				start = start->next;
			}
		}
		if (!swapped)
			break;
		swapped = 0;
		end = start;

		while (start->prev != NULL)
		{
			if (start->n < start->prev->n)
			{
				swap_nodes(list, &(start->prev), start);
				print_list(*list);
				swapped = 1;
			}
			else
				start = start->prev;
		}
	}
}

