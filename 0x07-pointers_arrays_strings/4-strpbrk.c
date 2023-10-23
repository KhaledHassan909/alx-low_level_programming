#include "main.h"

/**
 * *_strpbrk - searches a string for any set of bytes.
 * @s:  string to search into.
 * @accept:  chacters to be searched in s.
 * Return: pointer to byte in s matches accept.
 */

char *_strpbrk(char *s, char *accept)
{
char *start = accept;
while (*s != '\0')
{
while (*accept != '\0')
{
if (*accept == *s)
return (s);
else
accept++;
}
accept = start;
s++;
}
return (s);
}
