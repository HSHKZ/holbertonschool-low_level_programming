#include <stdio.h>
#include "main.h"

/**
 * print_rev - check the code
 *
 * Description: print
 *
 * @s: input
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i, length;

	length = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
		length++;
	for (i = (length - 1) ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
