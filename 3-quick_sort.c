#include "sort.h"

void rec_quicksort(int *array, int low, int high, size_t size);
int lomutoPartition(int *array, int low, int high, size_t size);

/**
 * quick_sort - Sorts an array of integers in ascending order using the
 *              quicksort algorithm with Lomuto partition scheme.
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 */
void quick_sort(int *array, size_t size)
{
    int low = 0;
    int high = size - 1;

    if (size < 2) /* c'est une condition du projet, je n'avasi même pas vu */
        return;

    rec_quicksort(array, low, high, size);
}

/**
* swap - swpa the values of two integers
* @a : first int
* @b : second int
* Return: void
*/
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

/**
*
*
*
*/
void rec_quicksort(int *array, int low, int high, size_t size)
{
    int parti;

    if (low < high)
    {
        parti = lomutoPartition(array, low, high, size);
        rec_quicksort(array, low, parti - 1, size);
        rec_quicksort(array, parti + 1, high, size);
    }
}

/**
*
*
*
*/
int lomutoPartition(int *array, int low, int high, size_t size)
{
    int pivot = array[high];
    int i = low - 1;
    int j;

    for (j = low ; j < high ; j++)
    {
        if (pivot > array[j])
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
	print_array(array, size);

	return (i + 1);
}
