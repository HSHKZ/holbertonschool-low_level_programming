#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * print_number - check the code
 *
 * Description: print
 *
 * @n: input
 *
 * Return: Always 0.
 */

void print_number(int n)
{
	int i, j, k, numRN, lenNum, divide;

	lenNum = 0;
	divide = 1;
	k = 0;
	if (n < 0)
	{
		_putchar('-');
		if (n == INT_MIN)
		{
			n++;
			k = 1;
		}
		n *= -1;
	}
	for (i = n ; i > 0 ; i /= 10)
		lenNum++;
	lenNum--;
	for (i = n ; i > 0 ; i %= divide)
	{
		divide = 1;
		for (j = 0 ; j < lenNum ; j++)
			divide = divide * 10;
		numRN = i / divide;
		lenNum--;
		if (i >= 10)
			_putchar('0' + numRN);
	}
	if (k == 1)
		_putchar('0' + (numRN + 1));
	else if ((n % 10) == 0)
		_putchar('0' + (n % 10));
	else
		_putchar('0' + numRN);
}
