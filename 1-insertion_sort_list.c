#include "sort.h"
/**
 * insertion_sort fuction that sorts an arr of intergers
 * @h1: A poiter to the head of the doubly-linked list.
 * @n2: The second node to swap.
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *c, *p, *nextnode;

	if (list == NULL || !(*list) || (*list)->next == NULL)
		return;
	c = (*list)->next;
	nextnode = c->next;
	while (c)
	{
		if (c->n < c->prev->n)
		{
			p = c->prev;
			while (p && (c->n < p->n))
			{
				if (!(p->prev))
				{
					p->prev = c;
					c->prev->next = c->next;
					if (c->next)
						c->next->prev = c->prev;
					c->next = p;
					c->prev = NULL;
					*list = c;
				}
				else
				{
					c->prev->next = c->next;
					if (c->next)
						c->next->prev = c->prev;
					p->prev->next = c;
					c->prev = p->prev;
					p->prev = c;
					c->next = p;
				}
				print_list(*list);
				p = c->prev;
			}
		}
		c = nextnode;
		c ? (nextnode = c->next) : (nextnode = NULL);
	}
}
