#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion_helper - Recursively finds the natural
 * square root of a number
 * @n: The number to find the square root of
 * @i: The current number to check as a possible square root
 *
 * Return: The square root of n, or -1 if no natural square root exists
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (i * i > n) /* If i^2 exceeds n, no natural sqrt exists */
	return (-1);

	if (i * i == n) /* Found the square root */
	return (i);

	return (_sqrt_recursion_helper(n, i + 1)); /* Check next number */
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n, or -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);

	return (_sqrt_recursion_helper(n, 1));
}

