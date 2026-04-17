#include "main.h"
/**
 * _isalpha - checks if a character is lowercase
 * @c: the character to check
 * Description: This function checks if the given character
 * is a lowercase letter from 'a' to 'z'.
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
