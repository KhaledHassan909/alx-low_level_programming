#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for character alphabetic type
 * @c: character to check
 *
 * Return: 1 if c is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
if (isalpha(c))
return (1);
else
return (0);
}
