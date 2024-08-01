#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to
 * the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print, or 0 if:
 * - The file cannot be opened or read.
 * - filename is NULL.
 * - Write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int bytes_read = 0;
	char c;
	int descriptor;

	if (filename == NULL)
		return (0);

	descriptor = open(filename, O_RDONLY);
	if (descriptor == -1)
		return (0);
	while (letters > 0 && read(descriptor, &c, 1) == 1)
	{
		if (write(STDOUT_FILENO, &c, 1) != 1)
		{
			close(descriptor);
			return (0);
		}
		bytes_read++;
		letters--;
	}
	close(descriptor);
	return (bytes_read);
}
