#include "main.h"
#include <stdio.h>
/**
 * puts_half - print the second half of the string
 * @str: the input string
 *
 * The function calculates the length of the string and prints the second half.
 * If the length is odd, it starts from the middle character; otherwise, it
 * starts from the character just after the middle.
 */

void puts_half(char *str)
{


	char *ptr = str, *start;
	int len = 0;

	while (*ptr)
	{
		ptr++;
		len++;
	}

	if (len % 2 == 1)
	{
		len = (len + 1) / 2;
	}
	else
	{
		len = len / 2;
	}

	start = str + len; /**point to the start pf the 2nd part*/

	while (*start)
	{
		_putchar(*start);
		start++;
	}



	_putchar('\n');


}
