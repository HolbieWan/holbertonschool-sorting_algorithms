#include "sort.h"

/**
 * swap_int - check the code
 * @arr: pointer to the array of int
 * @i: the first value to swap
 * @j: the second value to swap
 * Return: void
 */

void swap_array_i(int* array, int i, int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
void bubble_sort(int *array, size_t size)
{
	long unsigned int i, j = 0;

	while (j < size)
	{
		for (i = 1; i < (unsigned long int) size; i++)
		{
			if (array[i - 1] > array[i])
			{
				swap_array_i(array, i, i - 1);
			}
		}
		j++;
		print_array(array, size);
    	printf("\n");
	}
}
