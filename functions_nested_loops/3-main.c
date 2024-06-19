#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point
 * @c: is an input
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);

	else
		return (0);
}
