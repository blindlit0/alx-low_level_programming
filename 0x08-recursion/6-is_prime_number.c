#include "main.h"

int main_prime(int n, int i);
/**
 * is_prime_number - function to tell if an input integer is a prime number
 * @n: number to check
 * Return: 1 if n is a prime number and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (main_prime(n, n - 1));
}

/**
 * main_prime - tells if a number is prime recursively
 * @n: number to check
 * @i: iterator
 * Return: 1 if n is prime and 0 if not
 */

int main_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (main_prime(n, i - 1));
}
