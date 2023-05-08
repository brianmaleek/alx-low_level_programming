#include "main.h"

/**
 * exitWithError - prints error message with exit value
 * @error: exit value
 * @message: error message
 * @arg: additional argument for format specifier
 * @fd: file descriptor to close
 */
void exitWithError(int error, const char *message, const char *arg, int fd)
{
	dprintf(STDERR_FILENO, message, arg);
	if (fd != -1)
		close(fd);
	exit(error);
}

/**
 * main - copies one file to another
 * @argc: should be 3 (./a.out copyfromfile copytofile)
 * @argv: first is file to copy from (fd_1), second is file to copy to (fd_2)
 * Return: 0 (success), 97-100 (exit value errors)
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, n_read, n_write;
	char buffer[1024];

	if (argc != 3)
		exitWithError(97, "Usage: cp file_from file_to\n", NULL, -1);

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		exitWithError(98, "Error: Can't read from file %s\n", argv[1], -1);

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		exitWithError(99, "Error: Can't write to %s\n", argv[2], fd1);

	while ((n_read = read(fd1, buffer, sizeof(buffer))) > 0)
	{
		n_write = write(fd2, buffer, n_read);
		if (n_write == -1 || n_write != n_read)
			exitWithError(99, "Error: Can't write to %s\n", argv[2], fd2);
	}

	if (n_read == -1)
		exitWithError(98, "Error: Can't read from file %s\n", argv[1], fd1);

	if (close(fd1) == -1)
		exitWithError(100, "Error: Can't close fd %d\n", argv[1], fd1);

	if (close(fd2) == -1)
		exitWithError(100, "Error: Can't close fd %d\n", argv[2], fd2);

	return (0);
}
