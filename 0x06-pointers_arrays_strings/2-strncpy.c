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
int src_len = strlen(src);
int i;
char *ptr = dest;    
for (i = 0; i < n; i++)
{
if (i >= src_len)
break;
else
{
while(*ptr != '\0')
{
ptr++;
}
*ptr = src[i];
}
}    
return (dest);
}
