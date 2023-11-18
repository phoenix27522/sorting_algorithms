#include "sort.h"

/**
 * swap - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort - Sort an array of integers in ascending
 *              order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, j;

	if (array == NULL || size < 2)
		return;

	/* to find the initial gap for the shell sort*/
	while (gap <= size / 3)
	{
		gap = gap * 3 + 1;
	}

	for (; gap >= 1; gap /= 3)
	{
		for (j = gap; j < size; j++)
		{
			for (i = j - gap; i < size; i -= gap)
			{
				if (i >= gap && array[i] > array[i + gap])
					swap(&array[i], &array[i + gap]);
				else
					break;
			}
		}
		print_array(array, size);
	}
}
