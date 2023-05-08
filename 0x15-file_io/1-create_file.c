#include "main.h"

#define FILE_PERMS (S_IRUSR | S_IWUSR)
/**
 * rw------- permissions for the file
*/
#define BUFFER_SIZE 1024

/**
 * create_file - creates a file
 * @filename: name of file to create
 *              if filename is NULL return -1
 * @text_content: Null terminated string to write to file
 *                  if text_content is NULL create an empty file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_text, len_text = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, FILE_PERMS);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len_text])
			len_text++;

		write_text = write(file_descriptor, text_content, len_text);
		if (write_text == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}

