#include <stdio.h>
/**
 * main - small but q and e
 * Return: 0
 */

int main(void)
{
	char startChar = 'a';

	while (startChar <= 'z')
	{
		if (startChar != 'e' && startChar != 'q')
		{ putchar(startChar);
		}
		startChar++;
	}

	putchar('\n');
	return (0);
}
