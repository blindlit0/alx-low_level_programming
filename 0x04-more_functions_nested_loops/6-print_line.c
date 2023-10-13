#include <stdio.h>
#include "main.h"

/**
*print_line - draws a straight line
*@n: The number of _ to be printed
*/

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			putchar('_');
		}
	}
	putchar('\n');
}
