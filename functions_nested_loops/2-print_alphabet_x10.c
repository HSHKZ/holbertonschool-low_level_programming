#include "holberton.h"

/**
 *print_alphabet_x10 - printing the alphabet in lower case 10x
 *
 *main - printing the alphabet, a-z, 10 times.
 *
 *Return: There is no return value.
 */

void print_alphabet_x10(void)

{
	int a, i;

	i = 0;

	while (i < 10)
	{
		a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		i++;
		_putchar('\n');
	}
}
