#include <stdlib.h>
#include <time.h>


/**
 * main - Tell whether random number is positive or negative
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("is positive");
	} else if (n == 0)
	{
		printf("is zero");
	} else if (n < 0)
	{
		printf("is negative");
	}

	return (0);

}
