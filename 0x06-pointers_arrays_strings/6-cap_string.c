#include "main.h"
#include <stdio.h>

/**
 * *cap_string - Capitalizing given string.
 * @ptr:  pointer to string.
 * Return: Capitalized pointer to string.
 */
char *cap_string(char *ptr)
{
char spec_ch[13] = {',', ';', '.', '!',
'?', '"', '(', ')', '{', '}', '\t', ' ', '\n'};
char *start = ptr;
int i;
if (((*ptr - 97) >= 0) && ((122 - *ptr) >= 0))
*ptr -= 32;
while (*ptr != '\0')
{
for (i = 0; i < 13; i++)
{
if (*ptr == spec_ch[i])
{
if (*ptr == '\t')
*ptr = ' ';
ptr++;
if (*ptr == '\n')
ptr++;
if (((*ptr - 97) >= 0) && ((122 - *ptr) >= 0))
*ptr -= 32;
}
}
ptr++;
}
return (start);
}
