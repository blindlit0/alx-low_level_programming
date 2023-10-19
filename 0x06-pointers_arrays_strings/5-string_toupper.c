#include "main.h"

/**
 * string_toupper - change lowercase characters of a string to uppercase
 * @n: string
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int p;

	p = 0;
	while (n[p] != '\0')
	{
		if (n[p] >= 'a' && n[p] <= 'z')
			n[p] = n[p] - 32;
		p++;
	}
	return (n);
}
