#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_digit - Checks if a string contains only digits
 * @str: The string to be checked
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_digit(char *str)
{
    while (*str)
    {
        if (!isdigit(*str))
            return (0);
        str++;
    }
    return (1);
}

/**
 * _print_error - Prints an error message and exits with status 98
 */
void _print_error(void)
{
    printf("Error\n");
    exit(98);
}

/**
 * main - Multiplies two positive numbers
 * @argc: The number of arguments
 * @argv: The arguments
 *
 * Return: 0 if successful, 98 otherwise
 */
int main(int argc, char *argv[])
{
    char *num1, *num2;
    int len1, len2, len_res, i, j, carry, n1, n2, *result;

    if (argc != 3)
        _print_error();

    num1 = argv[1];
    num2 = argv[2];

    if (!is_digit(num1) || !is_digit(num2))
        _print_error();

    len1 = strlen(num1);
    len2 = strlen(num2);
    len_res = len1 + len2;

    result = calloc(len_res, sizeof(int));
    if (result == NULL)
        _print_error();

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        n1 = num1[i] - '0';

        for (j = len2 - 1; j >= 0; j--)
        {
            n2 = num2[j] - '0';
            carry += result[i + j + 1] + n1 * n2;
            result[i + j + 1] = carry % 10;
            carry /= 10;
        }
        result[i + j + 1] += carry;
    }

    i = 0;
    while (i < len_res && result[i] == 0)
        i++;

    if (i == len_res)
        printf("0");
    else
    {
        for (; i < len_res; i++)
            printf("%d", result[i]);
    }
    printf("\n");

    free(result);
    return (0);
}
