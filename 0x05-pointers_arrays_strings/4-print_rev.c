#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int string;

	for (string = 0; s[string] != '\0'; string++)
		;
	for (string = string - 1; s[string] != '\0'; string--)
	{
		_putchar(s[string]);
	}
	_putchar('\n');
}
