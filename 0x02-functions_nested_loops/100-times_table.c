#include "main.h"

/**
 * print_times_table - prints the time table
 * @n: what value the timetable is based on
 * Return: void
 */

void print_times_table(int n)
{
	int mult, res;
	
	for (n = 0; n <= 15; n++)
	{
		_putchar('0');

		for (mult = 1; mult <= 15; mult++)
		{
			_putchar(',');
			_putchar(' ');

			res = n * mult;

			if (res <= 15)
				_putchar(' ');
			else
				_putchar((res / 15) + '0');

			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}


