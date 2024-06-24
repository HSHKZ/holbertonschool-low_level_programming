#include "main.h"

/**
 * _strlen - length of string
 *
 * @s: Character
 *
 * Return: Zero if succesful
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}
