#include "sort.h"

/**
 * get_max - Get the maximum value in an array of integers.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Return: The maximum integer in the array.
 */
int get_max(int *array, int size)
{
	int max, i;

	for (max = array[0], i = 1; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}

	return (max);
}
void counting_sort(int *array, size_t size)
{
	int *count;
	size_t i, j, max;

	if (array == NULL || size <= 1)
		return;
	max = get_max(array, size);
	count = (int *)calloc(max + 1, sizeof(int));
	if (count == NULL)
		return;
	for (i = 0; i < size; i++)
		count[array[i]]++;

	print_array(count, max + 1);

	for (i = 0; i <= max; i++)
	{
		while (count[i] > 0)
		{
			array[j++] = i;
			count[i]--;
		}
	}
	free(count);
}
