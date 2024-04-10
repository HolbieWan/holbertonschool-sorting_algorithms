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
	
}
