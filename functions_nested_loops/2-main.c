#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - Entry point
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char text;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		for (text = 'a'; text <= 'z'; text++)
		{
			_putchar(text);
		}
	_putchar('\n');
	}
}
