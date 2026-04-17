#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the result of the multiplication
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success),return 1 if error
 */
int main(int argc, char *argv[])
{
	int num1, num2, multiple;

	/* Check if exactly two arguments are provided */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	multiple = num1 * num2;
	printf("%d\n", multiple);

	return (0);

}
