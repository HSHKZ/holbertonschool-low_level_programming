#include "main.h"


/**
 * prime_finder - finds if square root exists
 *
 * @prime: input
 *
 * @check: input
 *
 * Return: prime or not
 */

int prime_finder(int prime, int check)
{
	if (check > prime / 2)
		return (1);
	else if (prime % check == 0)
	{
		return (0);
	}
	else
		return (prime_finder(prime, check + 1));
}

/**
 * is_prime_number - check the code
 *
 * Description: print
 *
 * @n: input number
 *
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_finder(n, 2));
}
