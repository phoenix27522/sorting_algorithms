#include "sort.h"

void swap_node_ahead(listint_t **list, listint_t **tail, listint_t **head);
void swap_node_behind(listint_t **list, listint_t **tail, listint_t **head);
void cocktail_sort_list(listint_t **list);

/**
 * swap_node_ahead - Swap a node in a listint_t doubly-linked list
 *                   list of integers with the node ahead of it.
 * @list: A pointer to the head of a doubly-linked list of integers.
 * @tail: A pointer to the tail of the doubly-linked list.
 * @head: A pointer to the current swapping node of the cocktail shaker algo.
 */
void swap_node_ahead(listint_t **list, listint_t **tail, listint_t **head)
{
	listint_t *tmp = (*head)->next;

	if ((*head)->prev != NULL)
		(*head)->prev->next = tmp;
	else
		*list = tmp;
	tmp->prev = (*head)->prev;
	(*head)->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = *head;
	else
		*tail = *head;
	(*head)->prev = tmp;
	tmp->next = *head;
	*head = tmp;
}

/**
 * swap_node_behind - Swap a node in a listint_t doubly-linked
 *                    list of integers with the node behind it.
 * @list: A pointer to the head of a doubly-linked list of integers.
 * @tail: A pointer to the tail of the doubly-linked list.
 * @head: A pointer to the current swapping node of the cocktail shaker algo.
 */
void swap_node_behind(listint_t **list, listint_t **tail, listint_t **head)
{
	listint_t *tmp = (*head)->prev;

	if ((*head)->next != NULL)
		(*head)->next->prev = tmp;
	else
		*tail = tmp;
	tmp->next = (*head)->next;
	(*head)->prev = tmp->prev;
	if (tmp->prev != NULL)
		tmp->prev->next = *head;
	else
		*list = *head;
	(*head)->next = tmp;
	tmp->prev = *head;
	*head = tmp;
}

/**
 * cocktail_sort_list - Sort a listint_t doubly-linked list of integers in
 *                      ascending order using the cocktail shaker algorithm.
 * @list: A pointer to the head of a listint_t doubly-linked list.
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *tail, *head;
	bool swapped = false;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (tail = *list; tail->next != NULL;)
		tail = tail->next;

	while (swapped == false)
	{
		swapped = true;
		for (head = *list; head != tail; head = head->next)
		{
			if (head->n > head->next->n)
			{
				swap_node_ahead(list, &tail, &head);
				print_list((const listint_t *)*list);
				swapped = false;
			}
		}
		for (head = head->prev; head != *list;
				head = head->prev)
		{
			if (head->n < head->prev->n)
			{
				swap_node_behind(list, &tail, &head);
				print_list((const listint_t *)*list);
				swapped = false;
			}
		}
	}
}
