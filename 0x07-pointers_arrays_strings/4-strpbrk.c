#include "main.h"

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: pointer is returned to
 * @accept: pointer matches one of the bytes in this
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
		if (*s == accept[p])
		return (s);
		}
	s++;
	}

return ('\0');
}
