#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that addds a new node at
 * the beginning of a list
 * @h: list name
 * Return: new list with node
 */

size_t list_len(const list_t *h)
{
	int lst = 0;

	while (h)
	{
		lst++;
		h = h->next;
	}
	return (lst);
}
