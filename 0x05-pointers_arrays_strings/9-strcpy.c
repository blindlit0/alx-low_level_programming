#include "main.h"

/**
 * *_strcpy - copies specific string to specific place
 * @dest: where to copy string to 
 * @src: where to copy string from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
