#include "main.h"
#include <string.h>

/**
 * *_strncpy - Copy a string from src to dest.
 * @dest: string to append to.
 * @src:  string to be appended.
 * @n:    number of bytes to be copied  from src
 * Return: concantenated string.
 */

char *_strncpy(char *dest, char *src, int n)
{
char *src_ptr = src;
char *dest_ptr = dest;
int i;
for (i = 0; i < n; i++)
{
if (*src_ptr == '\0')
break;
else
{
*dest_ptr = *src_ptr;
src_ptr++;
dest_ptr++;
}
}
if (i < n)
{
dest[i] = '\0';
}
return (dest);
}
