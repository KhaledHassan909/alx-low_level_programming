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
if (*needle == *haystack)
return (haystack);
else
haystack++;
}
return (NULL);
}
