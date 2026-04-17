#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: The character to be checked
 *
 * Description: This function takes an integer, which represents
 * a character in ASCII. If the character is an uppercase letter
 * (A-Z), the function returns 1. Otherwise, it returns 0.
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);


}
