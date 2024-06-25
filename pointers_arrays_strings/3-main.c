#include <stdio.h>
#include "main.h"

/**
 * _puts - check the code
 *
 * Description: print
 *
 * @str: input
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
