#include "sort.h"

/**
* swap_node - function that swaps two nodes of a doubly linked list
* @list: pointer to the pointer of the head of th list
* @b: pointer to the first node to swap (ie 'previous')
* @j: pointer to the second node to swap (ie 'current')
* Return: void
*/
void swap_node(listint_t *b, listint_t *c)
{
	listint_t *a = b->prev;

	if (b == NULL || c == NULL)
		return;

	while (a != NULL && c->next != NULL)
	{
		a->next = c;
		b->prev = c;
		b->next = c->next;
		c->prev = a;
		c->next = b;
		b->next->prev = b;
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
	listint_t *current;
	listint_t *previous;

	if (list == NULL && *list == NULL)
		return;

	while (*list != NULL)
	{
		current = (*list)->next;
		previous = current->prev;

		if (current->n < previous->n)
		{
			swap_node(previous, current);
			print_list(*list);
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
