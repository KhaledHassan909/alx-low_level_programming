#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for digit
 * @c: character to check
 *
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);
}
