#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * using at most n bytes from source
 * @dest: destination
 * @src: source
 * @n: amount of bytes that can be used
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, o;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	o = 0;
	while (o < n && src[o] != '\0')
	{
	dest[i] = src[o];
	i++;
	o++;
	}
	dest[i] = '\0';
	return (dest);
}
