#include "main.h"

/**
 * read_textfile - function reads a text file and prints to
 *                  POSIX standard output
 * @filename: name of the file to be read
 * @letters: number of letters it should read and print
 * Return: if the function fails  or filename is null return 0
 *          otherwise return the actual number of letter it could read or print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, read_bytes, write_bytes;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
		if (!buffer)
			return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	read_bytes = read(file_descriptor, buffer, letters);
	if (read_bytes == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_bytes == -1 || write_bytes != read_bytes)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	free(buffer);
	close(file_descriptor);
	return (read_bytes);
}
