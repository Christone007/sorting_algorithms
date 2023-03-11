#include "sort.h"

/**
 * bubble_sort - Sorts a list of integers by bubbling each element
 * to the appropriate position in the list
 *
 * @array: The array of integers to sort
 * @size: The size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				print_array(array, size);
			}
		}
	}
}
