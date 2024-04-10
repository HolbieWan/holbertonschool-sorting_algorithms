#include "sort.h"

/**
* selection_sort - function  that sorts an array of integers in ascending order
*					 using the Selection sort algorithm
* @array: pointer to the array
* @size: size of the array
* Return: void
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, sort;
	int temp;

	if (array == NULL)
		return;

	for (i = 0 ; i < size - 1; i++)
	{
		sort = i;
		for (j = i + 1 ; j < size ; j++)
		{
			if (array[j] < array[sort])
			{
				sort = j;
			}
		}
		temp = array[sort];
		array[sort] = array[i];
		array[i] = temp;
		print_array(array, size);
	}
}
