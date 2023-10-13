#include <stdio.h>
#include "main.h"

/**
 *print_numbers - prints the numbers from zero to nine followed by a new line
 *Return: void
 */

void print_numbers(void)
{
	int nums;

	for (nums = 48; nums < 58; nums++)
	{
		putchar(nums);
	}
	putchar('\n');
}
