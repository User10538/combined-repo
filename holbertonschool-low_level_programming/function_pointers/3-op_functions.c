#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * op_add - sum of a and b
 * @a: integer.
 * @b: integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -  difference of a and b
 * @a: integer.
 * @b: integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);

}

/**
 * op_mul -  product of a and b
 * @a: integer.
 * @b: integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -  division of a by b
 * @a: integer.
 * @b: integer
 *
 * Return: division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);

}

/**
 * op_mod -  remainder of the division of a by b
 * @a: integer.
 * @b: integer
 *
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
