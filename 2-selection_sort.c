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
    size_t i, j;
    int temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[j]  < array[i])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                print_array(array, size);
            }
        }
    }
}
