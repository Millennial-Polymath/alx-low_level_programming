#include <unistd.h>
#include "holberton.h"
#include <sys/syscall.h>
/**
 * read_textfile - Reads a text file and prints it to the POSIX stnd ouput
 * @filename: name of the text file
 * @letters: Number of letters it should read and print
 * Return: No of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nbites, printed_chars;
	char *buf = (char *) malloc(sizeof(char) * letters + 5);

	if (!filename)
		return (0);


	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	nbites = read(fd, (void *)buf, letters);


	if (nbites == -1)
		return (0);


	printed_chars = write(SDOUT_FILENO, (const void *)buf, nbites);

	close(fd);
	free(buf);

	return (printed_chars);
}
