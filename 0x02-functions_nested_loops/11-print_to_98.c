#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - print to ninety-eight
 *@n: number to begin at
 *Return: 0 OR 1
*/
void print_to_98(int n)
{

while (n < 98)
{
	printf("%i, ", n);
	n++;
}
while (n > 98)
{
	printf("%i, ", n);
	n--;
}

printf("98");
putchar('\n');
}
