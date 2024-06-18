#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - return
 *@n: is come back
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void print_to_98(int n)
{
	for (; n < 98; n++)
	{
		printf("%d", n);
		if (n < 98)
		{
			printf(", ");
		}
	}
	for (; n >= 98; n--)
	{
		printf("%d", n);
		if (n > 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}
