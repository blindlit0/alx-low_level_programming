#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Number
 * Return: Last digit of n
 */

int print_last_digit(int n)
{
	int lasDig;

	if (n < 0)
		lasDig = (n % 10) * -1;
	else
		lasDig = n % 10;

	_putchar(lasDig + '0');

	return (lasDig);
}
