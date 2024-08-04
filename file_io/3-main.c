#include "main.h"

/**
 * check97 - correct number of arguments
 *
 * @argc: number of arguments
 */

void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check98 - file_from exists and can be read
 *
 * @check: true of false
 *
 * @file: file_from name
 *
 * @fd_from: file descriptor of file_from, or -1
 *
 * @fd_to: file descriptor of file_to, or -1
 */

void check98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check99 - file_to was created and can be written to
 *
 * @check: true of false
 *
 * @file: file_to name
 *
 * @fd_from: file descriptor of file_from, or -1
 *
 * @fd_to: file descriptor of file_to, or -1
 */

void check99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check100 - file descriptors were closed properly
 *
 * @check: true or false
 *
 * @fd: file descriptor
 */

void check100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another
 *
 * @argc: number of arguments
 *
 * @argv: array of arguments
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_from, close_to;
	ssize_t lenRd, lenWr;
	char buffer[1024];

	check97(argc);
	fd_from = open(argv[1], O_RDONLY);
	check98(fd_from, argv[1], -1, -1);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	check99(fd_to, argv[2], fd_from, -1);
	lenRd = 1024;
	while (lenRd == 1024)
	{
		lenRd = read(fd_from, buffer, 1024);
		check98(lenRd, argv[1], fd_from, fd_to);
		lenWr = write(fd_to, buffer, lenRd);
		if (lenWr != lenRd)
			lenWr = -1;
		check99(lenWr, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	check100(close_to, fd_to);
	check100(close_from, fd_from);
	return (0);
}
