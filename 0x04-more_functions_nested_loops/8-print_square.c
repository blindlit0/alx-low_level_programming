#include <stdio.h>
#include "main.h"

/**
*print_square - prints a square
*
*@size: The squares size
*/

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
		putchar('#');
	}
	if (i == size - 1)
	{
	continue;
	}
	putchar('\n');
	}
	}
	putchar('\n');
}
