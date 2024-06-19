#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char text[9] = "_putchar";
		int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
