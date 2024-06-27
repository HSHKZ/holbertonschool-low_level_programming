#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check the code
 *
 * Description: print
 *
 * Return: Always 0.
 */

int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;
	srand(time(0));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 93;
		sum += (pass[i] + '!');
		putchar(pass[i] + '!');
		if ((2772 - sum) - '!' < 33)
		{
			n = 2772 - sum - '!';
			sum += n;
			putchar(n + '!');
			break;
		}
	}

	return (0);
}
