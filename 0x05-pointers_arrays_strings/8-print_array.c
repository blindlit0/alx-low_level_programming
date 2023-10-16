#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by anew line
 * @a: name of array
 * @n: number of elements in a to be printed
 * Return: inputs of a and n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
