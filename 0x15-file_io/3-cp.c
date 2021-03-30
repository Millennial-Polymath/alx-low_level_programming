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
	int fd1, fd2, n;

	char buf[BUFFER];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}



	fd1 = open(argv[1], O_RDONLY, 0);

	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]), exit(98);
	}


	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, PERMS);


	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((n = read(fd1, buf, BUFFER)) > 0) /* cp: copy fd1 to fd2 */
	{
		if (write(fd2, buf, n) != n)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

		}
	}
	if (n == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]), exit(98);

	if (close(fd1) != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	if (close(fd2) != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);


	return (0);
}
