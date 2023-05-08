#include "main.h"

/**
 * exitWithError - prints error message with exit value
 * @error: exit value
 * @message: error message
 * @file_descriptor: file descriptor to close
 */
void exitWithError(int error, const char *message, int file_descriptor)
{
	dprintf(STDERR_FILENO, message, file_descriptor);
	if (file_descriptor != -1)
		close(file_descriptor);
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
	int file_descriptor1, file_descriptor2, n_read, n_write;
	char buffer[1024];

	if (argc != 3)
		exitWithError(97, "Usage: cp file_from file_to\n", -1);

	file_descriptor1 = open(argv[1], O_RDONLY);
	if (file_descriptor1 == -1)
		exitWithError(98, "Error: Can't read from file %s\n", -1);

	file_descriptor2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_descriptor2 == -1)
		exitWithError(99, "Error: Can't write to %s\n", file_descriptor1);

	while ((n_read = read(file_descriptor1, buffer, sizeof(buffer))) > 0)
	{
		n_write = write(file_descriptor2, buffer, n_read);
		if (n_write == -1 || n_write != n_read)
			exitWithError(99, "Error: Can't write to %s\n", file_descriptor2);
	}

	if (n_read == -1)
		exitWithError(98, "Error: Can't read from file %s\n", file_descriptor1);

	if (close(file_descriptor1) == -1)
		exitWithError(100, "Error: Can't close fd %d\n", file_descriptor1);

	if (close(file_descriptor2) == -1)
		exitWithError(100, "Error: Can't close fd %d\n", file_descriptor2);

	return (0);
}
