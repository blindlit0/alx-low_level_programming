#include <stdio.h>
/**
 * main - reverse lowercase
 * Return: 0
 */
int main(void)
{
	char small;

	for (small = 'z'; small >= 'a'; small--)
		putchar(small);

	putchar('\n');

	return (0);
}
