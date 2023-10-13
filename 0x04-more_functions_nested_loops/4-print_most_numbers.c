#include <stdio.h>
#include "main.h"

/**
 *print_most_numbers - prints the numbers from zero to nine
 *Return: void
 */

void print_most_numbers(void)
{
	int nums;

	for (nums = 48; nums < 58; nums++)
	{
		if (!(nums == 50) && !(nums == 52))
		{
			putchar(nums);
		}
	}
	putchar(10);
}
