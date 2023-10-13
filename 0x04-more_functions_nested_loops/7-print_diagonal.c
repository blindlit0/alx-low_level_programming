#include <stdio.h>
#include "main.h"

/**
*print_diagonal - draws a diagonal line
*@n: The number of \ to be printed.
*/

void print_diagonal(int n)
{
	int line, gaps;

	if (n > 0)
	{
	for (line = 0; line < n; line++)
	{
	for (gaps = 0; gaps < line; gaps++)
	{
		putchar(' ');
	}
	putchar('\\');
	if (line == n - 1)
	continue;
		putchar('\n');
	}
	}
	putchar('\n');
}
