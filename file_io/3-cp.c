#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * close_fd - Closes a file descriptor
 * @fd: File descriptor
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of a file
 * @argc: Number of arguments
 * @argv: Argument vector
 * Return: 0 on success, or exits with an error
 */
int main(int argc, char *argv[])
{
	int src, dest;
	ssize_t bytesRead, bytesWritten;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_fd(src);
		exit(99);
	}

	while ((bytesRead = read(src, buffer, 1024)) > 0)
	{
		bytesWritten = write(dest, buffer, bytesRead);
		if (bytesWritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_fd(src);
			close_fd(dest);
			exit(99);
		}
	}

	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close_fd(src);
		close_fd(dest);
		exit(98);
	}

	close_fd(src);
	close_fd(dest);
	return (0);
}
