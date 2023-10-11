#include "main.h"
/**
 * print_alphabets - Does Exactly as it says
 * Return: void
 */
void print_alphabets(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		_putchar(letters);
	_putchar('\n');
}
