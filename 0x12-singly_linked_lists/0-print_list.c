#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list
 * @h: list name
 * Return: list elements
 */

size_t print_list(const list_t *h)
{
	int ls = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		ls++;
		h = h->next;
	}
	return (ls);
}
