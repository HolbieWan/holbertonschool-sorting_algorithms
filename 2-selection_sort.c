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
	size_t i;
	size_t j;
	int temp;

	if (array == NULL)
		return;

	for (i = 0 ; i < size - 1; i++)
	{
		for (j = 0 ; j < size - 1; j++)
		if (array[j] > array[j + 1])
		{
			temp = array[j + 1];
			array[j + 1] = array[j];
			array[j] = temp;
			print_array(array, size);
			continue;
		}

	}
}
