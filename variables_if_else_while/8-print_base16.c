#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all the numbers of base 16 in lowercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = '0' ; n < 'g' ; n++)
	{
		if (n <= '9' || n >= 'a')
		putchar(n);
	}
	putchar('\n');
	return (0);
}
