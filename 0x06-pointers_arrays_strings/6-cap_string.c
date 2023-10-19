#include "main.h"

/**
 * cap_string - function that capitalizes all words in a string
 * @str: The string to be capitalized.
 *
 * Return: Changed string.
 */
char *cap_string(char *str)
{
	int cap = 0;

	while (str[cap])
	{
		while (!(str[cap] >= 'a' && str[cap] <= 'z'))
			cap++;

		if (str[cap - 1] == ' ' ||
		    str[cap - 1] == '\t' ||
		    str[cap - 1] == '\n' ||
		    str[cap - 1] == '.' ||
		    str[cap - 1] == '!' ||
		    str[cap - 1] == ',' ||
		    str[cap - 1] == ';' ||
		    str[cap - 1] == '"' ||
		    str[cap - 1] == '?' ||
		    str[cap - 1] == ')' ||
		    str[cap - 1] == '(' ||
		    str[cap - 1] == '{' ||
		    str[cap - 1] == '}' ||
		    cap == 0)
			str[cap] -= 32;

		cap++;
	}

	return (str);
}
