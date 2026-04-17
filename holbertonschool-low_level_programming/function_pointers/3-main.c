#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * main - Entry point, performs simple operations
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: 0 on success, exit with status 98, 99, or 100 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operator)(int, int); /* Declare function pointer */

	/* Must have exactly 3 arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	/* Get function pointer */
	/**operator = 3-get_op_func(argv[2]); */
	operator = get_op_func(argv[2]);

	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0) /* Division by zero */
	{
		printf("Error\n");
		exit(100);
	}

	result = operator(num1, num2);
	printf("%d\n", result);

	return (0);

}
