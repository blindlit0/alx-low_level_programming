#include "main.h"
/**
 * print_alphabet - Does Exactly as it says
 * Return: void
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		_putchar(letters);
	_putchar('\n');
}
