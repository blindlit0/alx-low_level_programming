#include <stdio.h>

/**
*main - prints largest prime factor of the number 612852475143.
*Return: Always 0.
*/

int main(void)
{
	long int nums, i;

	nums = 612852475143;
	for (i = 2; i <= nums; i++)
	{
	if (nums % i == 0)
	{
	nums /= i;
	i--;
	}
	}
	printf("%ld\n", i);
	return (0);
}
