#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of a given function.
 * @func: Pointer to the function.
 * @n: Number of bytes to print.
 *
 * Description: This function prints the opcodes of the specified
 * function in hexadecimal format.
 */

void print_opcodes(void *func, int n)
{
    unsigned char *p = (unsigned char *)func;
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%02x", p[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success, 1 on incorrect number of arguments, 2 on negative byte count.
 *
 * Description: This program prints the opcodes of its own main function.
 * The number of bytes to print is specified as a command-line argument.
 */

int main(int argc, char *argv[])
{
    int n;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    n = atoi(argv[1]);
    if (n < 0)
    {
        printf("Error\n");
        return (2);
    }

    print_opcodes((void *)main, n);
    return (0);
}
