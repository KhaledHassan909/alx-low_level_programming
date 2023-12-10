/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 1 if system is little endian, 0 if system is big endian
 */
#include "main.h"

int get_endianness(void)
{
	unsigned int x = 1;
	char *p;

	p = (char *) &x;

	if (*p == 1)
		return (1);
	else
		return (0);
}
