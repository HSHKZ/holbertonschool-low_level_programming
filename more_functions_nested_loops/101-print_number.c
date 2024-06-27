#include <stdio.h>
#include "mainadvanced.h"

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
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n > 9)
		print_number(n / 10);
	_putchar('0' + (n % 10));
}
