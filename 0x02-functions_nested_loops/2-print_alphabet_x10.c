#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times in lower case.
 */

void print_alphabet_x10(void)
{
	int num = 0;
	char let;

	while (num++ <= 9)
	{
		for (let = 'a'; let <= 'z'; let++)
			_putchar(let);
		_putchar('\n');
	}
}
