#include <stdio.h>
/**
 * main - zero to ten again
 * Return: 0
 */

int main(void)
{
	int nums;

	for (nums = 0; nums < 10; nums++)
		putchar((nums % 10) + '0');

	putchar('\n');

	return (0);
}
