#include <stdio.h>

/**
 * main - check the code
 *
 * Description: print
 *
 * Return: Always 0.
 */

int main(void)
{
	long int number = 612852475143;
	long int i, largestPrimeFactor;

	i = 2;
	largestPrimeFactor = 0;
	while (i <= (number / 2))
	{
		if ((number % i) == 0)
		{
			number = number / i;
			i = 1;
		}
		i++;
	}
	largestPrimeFactor = number;
	printf("%li\n", largestPrimeFactor);
	return (0);
}
