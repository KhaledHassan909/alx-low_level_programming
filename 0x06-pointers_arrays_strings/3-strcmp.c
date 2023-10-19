#include "main.h"

/**
 * *_strcmp - comparing 2 strings.
 * @s1:  1st string to be compared.
 * @s2:  2nd string to be compared.
 * Return: int.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
