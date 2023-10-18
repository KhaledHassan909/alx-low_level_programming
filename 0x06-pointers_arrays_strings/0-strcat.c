#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates two strings by appending src to dest.
 * @dest: string to append to.
 * @src:  string to be appended.
 * Return: concantenated string.
 */
char *_strcat(char *dest, char *src)
{
int src_len = strlen(src);
int i;
char *ptr = dest;
for (i = 0; i < src_len; i++) /*iteraring over s2*/
{
while (*ptr != '\0')
{
ptr++; /*s1 adress++ till reach end of s1*/
}
*ptr = src[i]; /*adding ith charcter of s2(src) in s1(des)*/
}
return (dest);
}
