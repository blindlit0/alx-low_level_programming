#include "main.h"

/**
* str_concat - a function that concatenates two strings.
* @s1:First string
* @s2:Second string
* Return: pointer to new string for success OR NULL for failure
*/

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, concat = 0,  len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat = malloc(sizeof(char) * len);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat[concat_i++] = s2[i];

	return (concat);
}
