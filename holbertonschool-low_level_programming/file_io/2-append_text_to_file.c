#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: constr char
 * @text_content: char
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{

	ssize_t bytes_written;
	int fd = open(filename, O_WRONLY | O_APPEND);

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
