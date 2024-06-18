#include "main.h"

/**
 *jack_bauer - return
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void jack_bauer(void)
{
	int c1, c2, c3, c4;

	for (c4 = 0; c4 <= 2; c4++)
	{
		if (c4 < 2)
		{
			for (c3 = 0 ; c3 <= 9; c3++)
			{
				for (c2 = 0; c2 <= 5; c2++)
				{
					for (c1 = 0; c1 <= 9; c1++)
					{
						_putchar(c4 + '0');
						_putchar(c3 + '0');
						_putchar(':');
						_putchar(c2 + '0');
						_putchar(c1 + '0');
						_putchar('\n');
					}
				}
			}
		}
		else
		{
			for (c3 = 0; c3 <= 3; c3++)
			{
				for (c2 = 0; c2 <= 5; c2++)
				{
					for (c1 = 0; c1 <= 9; c1++)
					{
						_putchar(c4 + '0');
						_putchar(c3 + '0');
						_putchar(':');
						_putchar(c2 + '0');
						_putchar(c1 + '0');
						_putchar('\n');
					}}}}}}
