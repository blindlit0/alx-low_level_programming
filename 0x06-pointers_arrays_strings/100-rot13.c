#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @s: string to be converted
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char info[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == info[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
