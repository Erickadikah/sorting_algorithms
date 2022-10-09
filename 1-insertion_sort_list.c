#include "sort.h"
/**
 * swap_nodes - swap two nodes in  a listint_t double-linked list.
 * insertion_sort fuction that sorts an arr of intergers
 * in asceding order using insertion sorth algorithm
 *
 * @h1: A poiter to the head of the doubly-linked list.
 * @n2: The second node to swap.
 *
 */
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - sorts a doubly linked list of intergers
 *
 * @list: A poiter to the head of doubly-linked list of intergers.
 *
 * Description: prints the list aftre each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter !=NULL; iter = tmp)
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap_nodes(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}
