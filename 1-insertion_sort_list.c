#include "sort.h"

/**
* swap_node - function that swaps two nodes of a doubly linked list
* @list: pointer to the pointer of the head of th list
* @i: first node to swap
* @j: second node to swap
* Return: void
*/
void swap_node(listint_t *i, listint_t *j)
{
	if (i->prev != NULL && j->next != NULL)
	{
		i->prev->next = j;
		j->next = i->prev;
		j->next = i->next;
		j->next->prev = i;
		i->prev = j;
		j->next = i;
	}
}

/**
* insertion_sort_list - function that sorts a doubly linked list
*			of integers in ascending order using the Insertion sort algorithm
* @list: pointer to the pointer of the head of the doubly linked list
* Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t current;
	listint_t previous;

	if (list == NULL && *list == NULL && **list == NULL)
		return;

	while (**list != NULL)
	{
		current = (*list)->next;
		previous = current->prev;
		if (current->n < previous->n)
		{
			swap_node(current, previous)
		}
	}


	/*for (i = 0 ; list != NULL && *list != NULL && **list->next != NULL ; i++)
	{
		if (**list->n < **list->prev->n)
		{
			swap_node(**list, **list->prev);
			print_list(*list);
		}
	}*/
}
