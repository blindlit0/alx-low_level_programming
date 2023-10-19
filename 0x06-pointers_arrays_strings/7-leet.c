#include "main.h"

/**
 * leet - function that encodes a string into 1337style
 * @n: input
 * Return: n
 */
char *leet(char *n)
{
	int s, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (s = 0; n[s] != '\0'; s++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[s] == s1[j])
			{
				n[s] = s2[j];
			}
		}
	}
	return (n);
}
