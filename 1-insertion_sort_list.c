#include "sort.h"

/**
* swap_node - function that swaps two nodes of a doubly linked list
*
* @list: pointer to the pointer of the head of the list
* @node: pointer to the node to swap
*
* Return: void
*/
void swap_node(listint_t **list, listint_t *node)
{
	/*libère le node*/
	node->prev->next = node->next;
	if (node->next != NULL)
		node->next->prev = node->prev;

	/*insère node devant le previous*/
	node->next = node->prev;
	node->prev = node->next->prev;
	node->next->prev = node;

	/*si pas de neud avant il devient le head*/
	if (node->prev == NULL)
		*list = node;
	else
		node->prev->next = node;
}


/**
* insertion_sort_list - function that sorts a doubly linked list
* of integers in ascending order using the Insertion sort algorithm
*
* @list: pointer to the pointer of the head of the doubly linked list
*
* Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = current->next;

	while (current->next != NULL)
	{
		current = current->next;

		while (current->prev && current->prev->n > current->n)
		{
			swap_node(list, current);
			print_list(*list);
		}
	}
}
