/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: long int
 * @m: unsigned int
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	/*use XOR to find the number to get the differing bits*/
	while (xor_result)
	{
		if (xor_result & 1)
			count++;

		/*move to next bit*/
		xor_result >>= 1;
	}

	return (count);
}
