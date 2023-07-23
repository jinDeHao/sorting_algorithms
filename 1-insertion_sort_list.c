#include "sort.h"

/**
 * insertion_sort_list - insertion sort method
 * @list: the linked list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = *list, *current, *back;

	if (!list || !*list || !(*list)->next)
		return;
	while (tmp)
	{
		current = tmp;
		while (current->prev && current->n < current->prev->n)
		{
			back = current->prev;
			back->next = current->next;
			current->prev = back->prev;
			if (back->prev)
				back->prev->next = current;
			if (current->next)
				current->next->prev = back;
			back->prev = current;
			current->next = back;
			back = back->prev;
			current = current->next;
			current = current->prev;
			if (!current->prev)
				(*list) = current;
			print_list(*list);
		}
		tmp = tmp->next;
	}
}
