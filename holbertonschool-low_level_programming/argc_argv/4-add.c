#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success), 1 (if error or non-positive number)
 */
int main(int argc, char *argv[])
{
	int num, sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		/** Check if each argument contains only digits*/

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(argv[i]);

		/**check if the number is positive*/

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}

