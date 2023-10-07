#include <stdio.h>

/**
 * main - zero to ten
 * Return: 0
 */

int main(void)
{
	int nums = '0';

	while (nums < '10')
	{ putchar(nums);
		nums++;
	}

	putchar('\n');

	return (0);
}
