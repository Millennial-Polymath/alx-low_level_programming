#include "holberton.h"

/**
 * create_file - A function that creates a file
 * @filename: The name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 upon success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);


	while (*(text_content + len) != '\0')
		len++;

	if (!len)
		write(fd, "", len);
	else
		write(fd, text_content, len);

	close(fd);

	return (1);
}
