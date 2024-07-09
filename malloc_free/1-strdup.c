#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - begining
 *
 * Description: print if negative or positive
 *
 * @str: sting
 *
 * Return: 0 ends the program
 */

char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (j = 0 ; str[j] != '\0' ; j++)
	;
	j++;
	s = malloc(j);
	if (s == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
	free(s);
}
