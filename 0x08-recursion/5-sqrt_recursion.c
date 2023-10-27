#include "main.h"

int main_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose square root is to be calculated
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (main_sqrt_recursion(n, 0));
}

/**
 * main_sqrt_recursion - recurses to find
 * the natural square root of a number
 * @n: number wose sqaure root is to be calculated
 * @i: iterator
 * Return: the natural square root
 */

int main_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (main_sqrt_recursion(n, i + 1));
}
