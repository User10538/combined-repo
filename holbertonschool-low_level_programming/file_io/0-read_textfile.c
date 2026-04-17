#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: constr char
 * @letters: size_t
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_written;
	/*need a buffer to temporarily hold the contents of the file*/
	char *buffer;
	int fd = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);

	if (fd == -1)
		return (0);

	/*use buffer to hold the content*/
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	bytes_read = read(fd, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(fd);

	return (bytes_written);
}
