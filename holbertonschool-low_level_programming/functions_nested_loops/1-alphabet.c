#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Description: This function loops through the lowercase
 * alphabet and prints each letter using _putchar. A new
 * line is printed at the end.
 *
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

