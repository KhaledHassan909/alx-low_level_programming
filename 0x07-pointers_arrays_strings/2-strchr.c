#include "main.h"

/**
 * *_strchr - locates a character in a string.
 * @s:  string to search into.
 * @c:  charcter to be searched.
 * Return: string from begin of char c.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
return (s);
}
