#include "sort.h"
/**
 * bubble_sort - sorts by repeatedly swapping the adjacent
 * elements if they are in the wrong order
 *
 * @array: a pointer to an array to be sorted
 * @size: size pf the array
 *
 * Returns: nothing(void)
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool swaped;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swaped = false;

		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swaped = true;
			}
		}
		if (swaped == false)
			break;

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
