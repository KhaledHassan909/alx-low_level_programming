#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s:  string to search into.
 * @accept:  chacters to be searched in s.
 * Return: number of bytes in the initial segment s.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
char *start = accept;
while (*s != '\0')
{
while (*accept != '\0')
{
if (*accept == *s)
{
n++;
s++;
accept = start;
}
else
{
accept++;
continue;
}
}
if (*accept == '\0')
break;
}
return (n);
}
