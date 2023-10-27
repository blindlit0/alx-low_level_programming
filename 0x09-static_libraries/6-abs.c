#include "main.h"
/**
 * _abs - Does the absolute value of an integer
 * @i: Integer whose absolute value is to be found
 * Return: Absolute value
 */

int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);
}
