#include "main.h"

/**
*_strlen - returns the length of a string..
*@s: value to be evaluate.
*Return: not.
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * create_file - Creates a file.
 * standard output.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t rcount = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		rcount = write(fd, text_content, len);
	close(fd);
	return (rcount == len ? 1 : -1);
}
