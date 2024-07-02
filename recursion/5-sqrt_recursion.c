#include "main.h"

/**
 * square_root_finder - finds if square root exists
 *
 * @square: input
 *
 * @number: input
 *
 * Return: root or error
 */

int square_root_finder(int square, int number)
{
	if (square * square == number)
		return (square);
	else if (square * square > number)
	{
		return (-1);
	}
	else
		return (square_root_finder(square + 1, number));
}

/**
 * _sqrt_recursion - check the code
 *
 * Description: print
 *
 * @n: input integer
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	return (square_root_finder(1, n));
}
