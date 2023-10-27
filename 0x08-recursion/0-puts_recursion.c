#include "main.h"

/**
 * _puts_recursion - function to print a string
 * @s: input string
 * Return: 0 for success
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
