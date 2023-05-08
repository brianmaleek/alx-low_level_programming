#include "main.h"
#include <string.h>

/**
 * append_text_to_file - append text to the end of a file
 * @filename: name of file to write into.
 * @text_content: text to append to file
 *
 * Return: 1 (SUCCESS), else -1 (FAILURE)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t write_result, len;

	file_descriptor = write_result = len = 0;

	if (!filename || strlen(filename) == 0)
		return (-1);

	if (!text_content || text_content[0] == '\0')
		return (1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor < 0)
		return (-1);

	while (text_content[len])
		len++;

	write_result = write(file_descriptor, text_content, len);
	if (write_result < 0)
	{
		close(file_descriptor);
		return (-1);
	}
	if (close(file_descriptor) < 0)
		return (-1);

	return (1);
}
