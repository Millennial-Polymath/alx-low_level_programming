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




	fd = open(filename, O_APPEND | O_WRONLY);
	if (!filename || fd == -1)
		return (-1);


	while (text_content && *(text_content + len) != '\0')
		len++;

	if (!len)
		return (1);

	if (write(fd, text_content, len) == -1)
		return (-1);

	close(fd);
	return (1);

}
