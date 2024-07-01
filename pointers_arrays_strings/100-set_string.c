#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char
 * @s: double pointer to be set
 * @to: the value to set the pointer to
 */
void set_string(char **s, char *to)
{
    *s = to;
}
