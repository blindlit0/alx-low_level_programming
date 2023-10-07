#include <stdio.h>
/**
 * main - zero to ten again
 * Return: 0
 */

int main(void)
{
	int nums = '0';

	while (nums < '0')
	{ putchar(nums);
		nums++;
	}

	putchar('\n');
	return (0);
}
