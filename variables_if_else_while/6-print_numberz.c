#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all the numbers'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(48 + number);
		number++;
	}
	putchar('\n');
	return (0);
}
