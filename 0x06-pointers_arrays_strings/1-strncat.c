#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenates two strings by appending n bytes from src to dest.
 * @dest: string to append to.
 * @src:  string to be appended.
 * @n:    number of bytes to be concatenated from src
 * Return: concantenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
