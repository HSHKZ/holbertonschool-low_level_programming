#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all the leters'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (1 == 1)
	{
		putchar(letter);
		letter++;
		if (letter > 'z')
			break;
	}
	putchar('\n');
	return (0);
}
