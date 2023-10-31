#include <stdio.h>
#include "main.h"

/**
*more_numbers - prints ten times the numbers from zero to fourteen
*
*Return: void
*/

void more_numbers(void)
{
	int n, j;

	for (n = 0; n < 10; n++)
	{
	for (j = 0; j <= 14; j++)
	{
		if (j > 9)
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
	}
	putchar('\n');
	}
}
