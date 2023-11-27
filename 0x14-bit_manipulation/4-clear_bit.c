/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to change
 * @index: index of the bit to set to 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1 << index;
	mask = ~mask;
	*n &= mask;
	return (1);
}
