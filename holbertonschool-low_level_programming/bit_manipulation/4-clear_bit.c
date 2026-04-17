/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index.
 * @n: long int
 * @index: unsigned int
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int range = sizeof(n) * 8;

	/*use bitwise AND and NOT to clear the bits*/
	unsigned long int mask = ~(1UL << index);
	/*check if index out of range*/
	if (index >= range)
		return (-1);

	*n &= mask;
	return (1);
}
