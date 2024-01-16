#include "main.h"
/**
 *_strcat - function that concatenates two strings
 *@dest: output or destination
 *@src: input or source
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int o;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	o = 0;
	while (src[o] != '\0')
	{
		dest[i] = src[o];
		i++;
		o++;
	}

	dest[i] = '\0';
	return (dest);
}
