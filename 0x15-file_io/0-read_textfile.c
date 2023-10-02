#include "main.h"
#include <stddef.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output.
 * @filename: file.
 * @letters: Number of letters it should read and print.
 * Return: Actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rcount;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rcount = read(fd, &buf[0], letters);
	rcount = write(STDOUT_FILENO, &buf[0], rcount);
	close (fd);
	return (rcount);
}
