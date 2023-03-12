#include "sort.h"

/**
 * selection_sort - Sorts an array of integers using the selection
 * sorting algorithm
 * @array: The array to sort
 * @size: The size of the array to sort
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t current, compare;
	int temp;

	current = 0;
	while (current < size)
	{
		compare = current + 1;

		while (compare < size)
		{
			if (array[current] > array[compare])
			{
				temp = array[current];
				array[current] = array[compare];
				array[compare] = temp;

				print_array(array, size);
			}
			compare++;
		}
		current++;
	}
}
