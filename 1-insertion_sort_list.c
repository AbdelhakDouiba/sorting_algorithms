#include "sort.h"

/**
*insertion_sort_list - sort a list using insertion sort algorithm
*@list: list to be sorted
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list, *tmp;

	while (current != NULL)
	{
		tmp = current;
		while (tmp != NULL)
		{
			if (tmp->prev != NULL && tmp->n < tmp->prev->n)
			{
				if (tmp->next != NULL)
					tmp->next->prev = tmp->prev;
				if (tmp->prev != NULL)
					tmp->prev->next = tmp->next;
				tmp->next = tmp->prev;
				tmp->prev = tmp->next->prev;
				if (tmp->prev != NULL)
					tmp->prev->next = tmp;
				else
					*list = tmp;
				if (tmp->next != NULL)
					tmp->next->prev = tmp;
				print_list(*list);
			}
			else
				tmp = tmp->prev;
		}
		current = current->next;
	}
}
