#include "main.h"

/**
 * wildcmp - compare two strings with wildcard support
 * @s1: first string to compare
 * @s2: second string, may contain the wildcard '*'
 *
 * Description:
 * - s2 can contain the special character '*'.
 * - The special char '*' can replace any string (including an empty string).
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)

{
    if (*s1 == '\0' && *s2 == '\0')
        return 1;

    if (*s2 == '*')
    {
        while (*s2 == '*')
            s2++;

        if (*s2 == '\0')
            return 1;

        while (*s1 != '\0')
        {
            if (wildcmp(s1, s2))
                return 1;
            s1++;
        }
        return 0;
    }

    if (*s1 == '\0')
        return 0;

    if (*s1 == *s2 || *s2 == '?')
        return wildcmp(s1 + 1, s2 + 1);

    return 0;
}
