#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 *
 * Description: This function prints the alphabet in lowercase from 'a' to 'z'
 *              a total of 10 times, each time followed by a new line
 *
 * Return: Nothing (void).
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
