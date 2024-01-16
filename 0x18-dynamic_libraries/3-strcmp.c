#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string one
 * @s2: string two
 * Return: zero if strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	int str;

	str = 0;
	while (s1[str] != '\0' && s2[str] != '\0')
	{
		if (s1[str] != s2[str])
		{
			return (s1[str] - s2[str]);
		}
	str++;
	}
	return (0);
}
