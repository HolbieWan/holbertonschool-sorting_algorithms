#include "sort.h"

/**
* quick_sort - function that sorts an array of integers in ascending order
*				 using the Quick sort algorithm and the Lomuto partition scheme
* @array: pointer to the array to sort
* @size: size of the array
* Return: void
*/
void quick_sort(int *array, size_t size)
{
	int i = 0, j;
	int pivot = size - 1;
	int elem_to_swap;
	int temp;

	while (array[i] != '\0')
	{
		if (array[i] > array[pivot])
			elem_to_swap = i;

		for (j = i + 1; j <= pivot; j++)
		{
			if (array[j] <= array[pivot] && array[pivot] < array[i])
			{
				temp = array[j];
				array[j] = array[elem_to_swap];
				array[elem_to_swap] = temp;
				print_array(array, size);
			}
			else if (array[j] < array[pivot] && array[j] > array[j+1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
		i++;
	}
}
