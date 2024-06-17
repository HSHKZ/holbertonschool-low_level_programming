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
		printf("%d", number);
		number++;
	}
	putchar('\n');
	return (0);
}
