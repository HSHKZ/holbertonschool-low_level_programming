#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - begining
 *
 * Description: print if negative or positive
 *
 * @ac: argc
 *
 * @av: argv
 *
 * Return: 0 ends the program
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, l = 0;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
		;
		l += j + 1;
	}
	str = malloc((sizeof(char) * l) + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
