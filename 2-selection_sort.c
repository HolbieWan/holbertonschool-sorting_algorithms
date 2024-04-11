#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending order
 *                   using the Selection sort algorithm
 * @array: pointer to the array
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	size_t smaller_elem;

	for (i = 0; i < size - 1; i++)
	{
		smaller_elem = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[smaller_elem])
			{
				smaller_elem = j;
			}
		}
		if (smaller_elem != i)
		{
			temp = array[i];
			array[i] = array[smaller_elem];
			array[smaller_elem] = temp;
			print_array(array, size);
		}
	}
}
