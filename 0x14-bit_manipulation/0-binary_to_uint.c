#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int iter = 0;
	unsigned int dec = 0;
	int str_len;

	/* Check if b is NULL */
	if (b == NULL)
		return (0);
	/* Get the length of the string */
	str_len = _strlen(b);

	/* Move pointer to last char before \0 */
	b += str_len - 1;

	/* Looping through the string */
	while (str_len > 0)
	{
		/* Check if current char isn't '0' not '1' */
		if (*b != '0' && *b != '1')
			return (0);

		if (*b == '1')
		{
			dec = dec + (1 << iter);
		}
		b--;
		iter++;
		str_len--;
	}

	return (dec);
}
