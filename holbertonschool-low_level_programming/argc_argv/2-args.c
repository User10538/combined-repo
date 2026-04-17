#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments (unused)
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int count;

	/**printf("This program was called with \"%s\".\n", argv[0]);*/

	for (count = 0; count < argc; count++)
	{
		/**printf("argv[%d] = %s\n", count, argv[count]);*/
		printf("%s\n", argv[count]);
	}

	return (0);
}
