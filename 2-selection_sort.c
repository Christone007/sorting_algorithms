#include "sort.h"
/**
 * selection_sort - Sorts items in an array using the select sort
 * @array: The array of integers to be sorted
 * @size: Size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, jMin;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		jMin = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[jMin])
			{
				jMin = j;
			}
		}

		if (jMin != i)
		{
			temp = array[i];
			array[i] = array[jMin];
			array[jMin] = temp;
			print_array(array, size);
		}
	}
}
