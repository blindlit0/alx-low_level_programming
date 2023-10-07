#include <stdio.h>
/**
 * main - small to big
 * Return: 0
 */

int main(void)
{
	char charSmall = 'a';
	char charBig = 'A';

	while (charSmall <= 'z')
	{ putchar(charSmall);
		charSmall++;
	}
	while (charBig <= 'Z')
	{ putchar(charBig);
		charBig++;
	}

	putchar('\n');
	return (0);
}
