/**
 * flip_bits - returns the number of bits you would need to flip
 *             to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 */

/* Include the header file */
#include "main.h"

/* Define the function flip_bits which takes two parameters n and m */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* Declare a variable res of type unsigned long int */
	unsigned long int res;
	/* Declare a variable inc of type int and initialize it to 0 */
	int inc = 0;

	/* Perform a bitwise XOR operation on n and m and store the result in res */
	res = n ^ m;
	while (res != 0)
	{
		/* If the least significant bit of res is 1, increment inc */
		if ((res & 1) != 0)
			inc++;
		/* Right shift the bits of res by one place (equivalent to dividing by 2) */
		res = res >> 1;
	}

	/* Return the value of inc */
	return (inc);
}
