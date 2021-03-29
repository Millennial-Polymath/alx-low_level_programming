#include "holberton.h"

/**
 * append_text_to_file - Appends a text at the end of the file
 * @filename:  The name of the file
 * @text_content: Null terminated string
 *
 * Return: NULL, 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content && *(text_content + len) != '\0')
		len++;
	if (!text_content)
	{
		return (-1);
	}
	else
	{
		write(fd, text_content, len);
		return (1);
	}
	close(fd);
}
