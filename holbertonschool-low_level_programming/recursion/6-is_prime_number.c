#include "main.h"
#include <stdio.h>

/**
 * is_prime_helper - Helps determine if a number is prime recursively
 * @n: The number to check
 * @i: The divisor to test
 *
 * Return: 1 if prime, 0 otherwise
 */


int is_prime_helper(int n, int i)
{
	if (i * i > n) /* If i^2 > n, no divisors found, it's prime */
	return (1);
	if (n % i == 0) /* If divisible, it's not prime */
	return (0);

	return (is_prime_helper(n, i + 1)); /* Check next number */
}

/**
 * is_prime_number - Check if it is prime number
 * @n: The number to check
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);

	return (is_prime_helper(n, 2)); /* Start checking from 2 */
}
