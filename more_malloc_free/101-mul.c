#include <stdio.h>
#include <stdlib.h>

/**
 * print_error_and_exit - Prints "Error" and exits with status 98.
 */
void print_error_and_exit(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * is_valid_number - Checks if a string contains only digits.
 * @str: The string to check
 *
 * Return: 1 if valid number, 0 otherwise
 */
int is_valid_number(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return 0;
		str++;
	}
	return 1;
}

/**
 * multiply_strings - Multiplies two strings representing numbers.
 * @num1: The first number as a string
 * @num2: The second number as a string
 *
 * Return: The result of num1 * num2 as a string
 */
char *multiply_strings(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j;
	char *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return NULL;

	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';
	result[i] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			int mul = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
			carry = mul / 10;
			result[i + j + 1] = (mul % 10) + '0';
		}
		result[i] += carry;
	}

	for (i = 0; result[i] == '0' && result[i + 1] != '\0'; i++);

	if (i > 0)
	{
		int shift = i;
		for (j = 0; result[j + shift] != '\0'; j++)
			result[j] = result[j + shift];
		result[j] = '\0';
	}

	return result;
}

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *result;

	if (argc != 3)
		print_error_and_exit();

	num1 = argv[1];
	num2 = argv[2];
	if (!is_valid_number(num1) || !is_valid_number(num2))
		print_error_and_exit();

	result = multiply_strings(num1, num2);
	if (result == NULL)
		print_error_and_exit();

	printf("%s\n", result);

	free(result);

	return 0;
}
