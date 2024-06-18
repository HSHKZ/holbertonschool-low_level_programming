#include "main.h"

/**
 * main - prints "_putchar" followed by a new line, and exits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char message[] = "_putchar\n";
	unsigned long int index;

	for (index = 0; index < sizeof(message); index++)
	{
		_putchar(message[index]);
	}

	return (0);
}
