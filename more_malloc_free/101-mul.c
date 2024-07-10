#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isdigit - Checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int _isdigit(char *str)
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
 * _strlen - Computes the length of a string.
 * @str: The string whose length to compute.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
    int len = 0;

    while (str[len])
        len++;
    return (len);
}

/**
 * _multiply - Multiplies two numbers represented as strings.
 * @num1: The first number.
 * @num2: The second number.
 */
void _multiply(char *num1, char *num2)
{
    int len1 = _strlen(num1);
    int len2 = _strlen(num2);
    int *result = calloc(len1 + len2, sizeof(int));
    int i, j, carry, n1, n2, sum;

    if (result == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    for (i = len1 - 1; i >= 0; i--)
    {
        n1 = num1[i] - '0';
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            n2 = num2[j] - '0';
            sum = n1 * n2 + result[i + j + 1] + carry;
            carry = sum / 10;
            result[i + j + 1] = sum % 10;
        }
        result[i + j + 1] += carry;
    }
    i = 0;
    while (i < len1 + len2 && result[i] == 0)
        i++;
    if (i == len1 + len2)
        putchar('0');
    else
    {
        while (i < len1 + len2)
            putchar(result[i++] + '0');
    }
    putchar('\n');
    free(result);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: 0 if successful, 98 if there is an error.
 */
int main(int argc, char *argv[])
{
    if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
    {
        printf("Error\n");
        return (98);
    }
    if (strcmp(argv[1], "0") == 0 || strcmp(argv[2], "0") == 0)
    {
        printf("0\n");
        return (0);
    }
    _multiply(argv[1], argv[2]);
    return (0);
}
