#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: long int
 * @m: unsigned int
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/**
 * set_bit -  function that sets the value of a bit to 0 at a given index.
 *
 * @n: long int
 * @index: unsigned int
 * Return - 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index);

/**
 * set_bit - function that sets the value of a bit to 1 at a given in
 * @n: long int
 * @index: unsigned int
 */
int set_bit(unsigned long int *n, unsigned int index);

/**
 * get_bit - return the value of bit
 * @n: long int
 * @index: unsigned int
 * Return: vlaue of bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index);

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: long int
 */
void print_binary(unsigned long int n);

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: const character
 * Return:the converted number, or 0
 */
unsigned int binary_to_uint(const char *b);

/**
 * _putchar - to print
 * @c: get the character
 * Return: nothing.
 */
int _putchar(char c); /**this is for putchar*/

#endif /* MAIN_H */
