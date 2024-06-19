#include <stdio.h>
#include "main.h"

/**
* print_alphabet - Entry point
*
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char text;

	for (text = 'a'; text <= 'z'; text++)
	{
		_putchar(text);
	};
	_putchar('\n');
}
