#include <stddef.h>
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * int_index - function that searches for an integer
 * on each element of an array
 * @array: name of array.
 * @size: number of elements in the array
 * @cmp: pointer to the function you need to use
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int));

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: name of array.
 * @size: size of the size_t
 * @action: function pointer.
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int));


/**
 * print_name - function that prints a name
 * @name: name to be printed.
 * @f: function pointer.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *)); /** task 0*/

/**
 * _putchar - to print
 * @c: get the character
 * Return: nothing.
 */
int _putchar(char c); /**this is for putchar*/

#endif /* FUNCATION_POINTERS_H */

