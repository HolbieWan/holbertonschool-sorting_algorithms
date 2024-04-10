#include "sort.h"

/**
 * swap_array_i - functions that swaps to int in an array
 *
 * @array: pointer to the array of int
 * @i: the first value to swap
 * @j: the second value to swap
 *
 * Return: void
 */
void swap_array_i(int *array, int i, int j)
{
	int temp;

	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}

/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 *
 * @array: the array of int to sort
 * @size: the size of the given array
 *
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned long int i, j = 0;
	unsigned long int swap_done;


	printf("\n");

	for (i = 0; i < (unsigned long int) size - 1; i++)
	{
		swap_done = 0;
		for (j = 0; j < (unsigned long int) size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_array_i(array, j, j + 1);
				swap_done = 1;
				print_array(array, size);
			}
		}
		if (swap_done == 0)
			break;
	}
}

