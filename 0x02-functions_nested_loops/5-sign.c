#include "main.h"

/**
 * print_sign - checks for number sign
 * @n: integer to check
 *
 * Return: 1 if n > 0, -1 if n < 0 & 0 if n == 0
 */
int print_sign(int n)
{
if (n > 0)
return (1);
else if (n < 0)
return (-1);
else
return (0);
}
