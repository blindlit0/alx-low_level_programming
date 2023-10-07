#include <stdio.h>
/**
 * main - baase sixteen
 * Return: 0
 */

int main(void)
{
	int num;
	char chars;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (chars = 'a'; chars <= 'f'; chars++)
		putchar(chars);

	putchar('\n');

	return (0);
}

