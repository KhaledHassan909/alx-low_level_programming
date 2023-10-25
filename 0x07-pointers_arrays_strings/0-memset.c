#include "main.h"

/**
 * *_memset - fills the first n bytes with the constant byte c.
 * @s:  pointer to charcter.
 * @b:  value to be filled.
 * @n:  bytes no to be filled starting from s address.
 * Return: pointer to the memory address s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *temp = s;
for (i = 0; i < n; i++)
{
*temp = b;
temp++;
}
return (s);
}

