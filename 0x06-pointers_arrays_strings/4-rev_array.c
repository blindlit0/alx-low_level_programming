#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array
 * @n: number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int frs;
	int l;

	for (frs = 0; frs < n--; frs++)
	{
		l = a[frs];
		a[frs] = a[n];
		a[n] = l;
	}
}
