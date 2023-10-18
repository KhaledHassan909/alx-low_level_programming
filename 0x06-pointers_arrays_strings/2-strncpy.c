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
return (strncpy(dest, src, n));
}
