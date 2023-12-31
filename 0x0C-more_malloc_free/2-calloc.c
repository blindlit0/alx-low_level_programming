#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of elements of
 * an amount of bytes each and returns a pointer to the allocated memory.
 * @nmemb: memory for array
 * @size: size bytes
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;
	return (a);
}
