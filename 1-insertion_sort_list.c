#include "sort.h"


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
    if (list == NULL || list->next == NULL)
        return list;
    // head is the first element of resulting sorted list
    struct list * head = NULL;
	struct list * current = list;

    while (list != NULL)
	{
        list = list->next;

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
