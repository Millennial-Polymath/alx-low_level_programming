#include "holberton.h"
#define BUFFER 1024
#define PERMS 0664
/**
 * main - Program starts here
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	int fd, fd1, fd2, n;

	char buf[BUFFER];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(98);
	}

	fd = open(argv[2], O_RDONLY | O_TRUNC, 0);

	fd1 = open(argv[1], O_RDONLY, 0);

	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}

	fd2 = creat(argv[2], PERMS);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((n = read(fd1, buf, BUFFER)) > 0) /* cp: copy fd1 to fd2 */
	{
		if (write(fd2, buf, n) != n)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(fd) != 0)
		dprintf(2, "Error: Can't close fd %d\n", fd);
	return (0);
}
