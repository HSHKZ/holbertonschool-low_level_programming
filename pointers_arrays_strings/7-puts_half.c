#include <stdio.h>
#include "main.h"

/**
 * puts_half - check the code
 *
 * Description: print
 *
 * @str: input
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i, length, StartOfPrint;

	length = 0;
	StartOfPrint = 0;
	for (i = 0 ; str[i] != '\0' ; i++)
		length++;
	if ((length % 2) == 1)
		StartOfPrint = (length + 1) / 2;
	else
		StartOfPrint = length / 2;
	for (i = StartOfPrint ; i < length ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
