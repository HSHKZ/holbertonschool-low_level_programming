#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard.
 * @a: Array of chars representing the chessboard.
 *
 * Description: This function takes a 2D array `a` representing a chessboard
 *              and prints its contents. It iterates through the rows and
 *              columns of the array and prints each character. It skips any
 *              characters that are not letters (uppercase or lowercase) or
 *              spaces. After printing each row, it moves to the next line.
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned short int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((a[i][j] >= 'A' && a[i][j] <= 'Z') ||
			(a[i][j] >= 'a' && a[i][j] <= 'z') ||
			(a[i][j] == ' '))
			{
				putchar (a[i][j]);
			}
		}
		putchar ('\n');
	}
}
