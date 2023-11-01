#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly 
 * allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: source string
 * Return: pointer to the duplicated string OR
 * NULL if insufficient memory
 */

char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}
