#include "main.h"

/**
 * *string_toupper - Converting any lowercase string to uppercase.
 * @ptr:  pointer to charcter.
 * Return: Uppercase string.
 */
char *string_toupper(char *ptr)
{
static char str[100] = "";
int i = 0;
while (*ptr != '\0')
{
if (((*ptr - 97) >= 0) && ((122 - *ptr) >= 0))
{
*ptr -= 32;
str[i] = *ptr;
i++;
ptr++;
}
else
{
str[i] = *ptr;
i++;
ptr++;
continue;
}
}
return (str);
}
