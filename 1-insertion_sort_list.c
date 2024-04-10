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
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 *
 * @list: the double linked list
 *
 * Return: Void
 */
void insertion_sort_list(listint_t **list)
{
	{
    // zero or one element in list
    if (pList == NULL || pList->pNext == NULL)
        return pList;
    // head is the first element of resulting sorted list
    struct LIST * head = NULL;
    while (pList != NULL) {
        struct LIST * current = pList;
        pList = pList->pNext;
        if (head == NULL || current->iValue < head->iValue) {
            // insert into the head of the sorted list
            // or as the first element into an empty sorted list
            current->pNext = head;
            head = current;
        } else {
            // insert current element into proper position in non-empty sorted list
            struct LIST * p = head;
            while (p != NULL) {
                if (p->pNext == NULL || // last element of the sorted list
                    current->iValue < p->pNext->iValue) // middle of the list
                {
                    // insert into middle of the sorted list or as the last element
                    current->pNext = p->pNext;
                    p->pNext = current;
                    break; // done
                }
                p = p->pNext;
            }
        }
    }
    return head;
}
}
