#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic
 *@c: The alphabetic character to be checked
 * Return: 1 if true OR 0 is false
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
