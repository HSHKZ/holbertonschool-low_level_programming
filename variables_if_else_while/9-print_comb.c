#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all the numbers of base 16 in lowercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48  ; n < 58 ; n++)
	{
		putchar(n);
		if (n < 57)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
