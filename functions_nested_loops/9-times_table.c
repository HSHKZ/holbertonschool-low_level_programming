#include "main.h"

/**
 *times_table - return
 *
 *Description: it want eat me
 *
 *Return: Success
 */

void times_table(void)
{
	int x, y, sum;

	for (x = 0; x < 10 ; x++)
	{
		for (y = 0; y < 10; y++)
		{
			sum = x * y;

			if (sum < 10 && y != 0)
			{
				_putchar(' ');
			}
			else if (y != 0)
			{
				_putchar('0' + (sum / 10));
			}
			_putchar('0' + (sum % 10));
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
