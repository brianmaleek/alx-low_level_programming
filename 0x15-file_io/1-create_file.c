#include "main.h"
#include <string.h>

/**
 * rw------- permissions for the file
 */
#define FILE_PERMS (S_IRUSR | S_IWUSR)

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 *            if filename is NULL return -1
 *
 * @text_content: NULL terminated string to write to the file
 *                if text_content is NULL create empty file
 *
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, len = 0;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, FILE_PERMS);
	if (file_descriptor == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		bytes_written = write(file_descriptor, text_content, len);
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
