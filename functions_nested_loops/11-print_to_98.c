#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - prints numbers until 98
 * @n: an int to start the count
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d,", n);
			putchar(32);
			n++;
		}
		printf("%d", n);
		putchar('\n');
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d,", n);
			putchar(32);
			n--;
		}
		printf("%d", n);
		putchar('\n');
	}
	else
		 printf("%d\n", n);
}
