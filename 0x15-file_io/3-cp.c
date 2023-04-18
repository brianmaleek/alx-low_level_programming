#include "main.h"

#define BUFFER_SIZE 1024

char *create_buffer(size_t size);
void close_file(int file_descriptor);
int copy_file(const char *src_path, const char *dst_path);
int EXIT_FAILURE = 97;

/**
 * create_buffer - allocates a buffer at a given size
 * @size: size of buffer to allocate
 * Return: pointer to new buffer
*/
char *create_buffer(size_t size)
{
	char *buffer = malloc(sizeof(char) * size);

	if (!buffer)
	{
		fprintf(stderr, "Error: Failed to allocate memory for buffer.\n");
		exit(EXIT_FAILURE);
	}
	return (buffer);
}

/**
 * close_file - Closes a file descriptor and checks for errors.
 * @file_descriptor: The file descriptor to close.
 */
void close_file(int file_descriptor)
{
	if (close(file_descriptor) == -1)
	{
		fprintf(stderr, "Error: Failed to close file descriptor %d: %s\n",
				file_descriptor, strerror(errno));
		exit(100);
	}
}
/**
 * copy_file - Copies the contents of one file to another.
 * @src_path: The path of the source file to copy.
 * @dst_path: The path of the destination file to create.
 * Return: 0 on success, or -1 on failure.
*/
int copy_file(const char *src_path, const char *dst_path)
{
	int src_file_descriptor, dst_file_descriptor;
	ssize_t bytes_read, bytes_written;
	struct stat src_stat;
	mode_t mode;
	char *buffer;

	/**
	 * Open the source file for reading
	 */
	src_file_descriptor = open(src_path, O_RDONLY);
	if (src_file_descriptor == -1)
	{
		fprintf(stderr, "Error: Failed to open file %s for reading: %s\n",
				src_path, strerror(errno));
		exit(97);
	}

	/**
	 * Get the size of the source file
	 */
	if (fstat(src_file_descriptor, &src_stat) == -1)
	{
		fprintf(stderr, "Error: Failed to get file stats for %s: %s\n",
				src_path, strerror(errno));
		close_file(src_file_descriptor);
		return (-1);
	}

	/**
	 * Create the destination file with the same mode as the source file
	 */
	mode = src_stat.st_mode & (S_IRWXU | S_IRWXG | S_IRWXO);
	dst_file_descriptor = open(dst_path, O_WRONLY | O_CREAT | O_EXCL, mode);
	if (dst_file_descriptor == -1)
	{
		fprintf(stderr, "Error: Failed to create file %s: %s\n",
				dst_path, strerror(errno));
		close_file(src_file_descriptor);
		return (-1);
	}

	/**
	 * Copy the contents of the source file to the destination file
	 */
	buffer = create_buffer(BUFFER_SIZE);
	while ((bytes_read = read(src_file_descriptor, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dst_file_descriptor, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			fprintf(stderr, "Error: Failed to write to file %s: %s\n",
					dst_path, strerror(errno));
			free(buffer);
			close_file(src_file_descriptor);
			close_file(dst_file_descriptor);
			return (-1);
		}
	}
	free(buffer);
}