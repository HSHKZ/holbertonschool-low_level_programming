#include "main.h"

/**
 *print_last_digit - Write a function that prints the last digit of a number.
 *@l: is come back
 *
 *Description: Le but est de récupèrer le dernier chiffre d'une suite de nombre.
 *23 / 10 = 2 reste 3
 * modulo '%' va permettre de récupèrer le reste de la division dans la
 * variable 'lastdigit'
 *les putchar vont afficher la valeur appler par la
 *fonction dans le main.c
 *return va retourné la valeur calculé dans le putchar
 du main.c
 *
 *
 *Return: Success
 */
int print_last_digit(int l)
{
	int lastdigit;

	lastdigit = l % 10;
	if (lastdigit < 0)
	{
		_putchar(-lastdigit + '0');
		return (-lastdigit);
	}
	else
	{
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
}
