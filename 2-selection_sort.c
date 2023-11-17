#include "sort.h"

/**
 * selection_sort - repeatedly select the smallest plaset in to the left
 * side of the array
 *
 * @array: array to be sorted
 * @size: length of the array
 *
 * Return: nothing(void)
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		if (min_index != i)
		{
			swap(&array[min_index], &array[i]);
			print_array(array, size);
		}
	}
}
/**
 * swap - swaps two pointers
 *
 * @x: pointer to be swaped
 * @y: pointer to be swaped
 *
 * Return: noting (void)
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
