# ifndef SORT_H
# define SORT_H


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/* ---- for bitonic sort ----- */
#define UP 0
#define DOWN 1

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* ---------------------- printing --------------------------*/
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/* ---------------------- sorting task ---------------------*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);

/* ------------------------------ batonic --------------------------------*/
void bitonic_merge(int *array, size_t size, size_t start, size_t seq,
                char dir);
void bitonic_seq(int *array, size_t size, size_t start, size_t seq, char dir);

/* ----------------------- lomuto algorithm ------------------*/
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);

/* ------------------------- constracting max heap -------------------- */
void max_heapify(int *array, size_t size, size_t base, size_t root);

/* ---------------------- swaping ------------------------------*/
void swap(int *x, int *y);
void swap_nodes(listint_t **h, listint_t **node1, listint_t *node2);

#endif
