#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int iter = 0;

	/* Check if index is greater than the bits no in unsigned long int */
	if (index > (sizeof(n) * 8 - 1))
		return (-1);

	while (n != 0)
	{
		/* Catch desired index returning corresponding bit */
		if (index == iter)
			return (n & 1);
		/* Dividing n by 2 using right shift operator */
		n = n >> 1;
		/* increment iter to match index value */
		iter++;
	}

	return (-1);
}
