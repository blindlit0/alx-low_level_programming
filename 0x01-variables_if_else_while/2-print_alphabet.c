#include <stdio.h>

/**
 * main - print small
 * Return: 0
 */

int main(void);
{
	char startchar = 'a';

	while (startchar <= 'z')
	{ putchar(startchar);
		startchar++;
	}
	putchar('\n');

	return (0);
}
