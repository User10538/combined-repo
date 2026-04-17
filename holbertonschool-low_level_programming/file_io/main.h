#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void error_exit(int code, const char *message, const char *arg);
int copy_file_to_file(const char *file_from, const char *file_to);

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: constr char
 * @text_content: char
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content);

/**
 * create_file - function that creates a file.
 * @filename: constr char
 * @text_content: char
 * Return: actual number of letters it could read and print
 */
int create_file(const char *filename, char *text_content);

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: constr char
 * @letters: size_t
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * _putchar - to print
 * @c: get the character
 * Return: nothing.
 */
int _putchar(char c); /**this is for putchar*/

#endif /* MAIN_H */
