#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file -  function that creates a file.
 * @filename: constr char
 * @text_content: char
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t bytes_written;
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filename == NULL)
		return (-1);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

