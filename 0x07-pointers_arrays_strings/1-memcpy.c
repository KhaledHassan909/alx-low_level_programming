#include "main.h"

/**
 * *_memset - fills the first n bytes with the constant byte c.
 * @dest:  destination to be filled.
 * @src:  value to fill dest.
 * @n:  bytes no to be filled from src to dest.
 * Return: pointer to the memory address dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*dest = *src;
src++;
dest++;
}    
return (dest);
}
