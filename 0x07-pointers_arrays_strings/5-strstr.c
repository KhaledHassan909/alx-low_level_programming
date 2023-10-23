#include "main.h"
#include <stddef.h>

/**
 * *_strstr - locates a substring.
 * @haystack:  string to search in.
 * @needle:  substring to be searched.
 * Return: pointer to beginning of loacated substring.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
