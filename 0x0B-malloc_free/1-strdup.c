#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - Makes copy if given string.
 * @str: string.
 * Return: pointer to duuplicated string.
 */
char *_strdup(char *str)
{
char *ptr;
int i = 0, str_len = 0;
if (str == NULL)
return (NULL);
str_len = strlen(str);
ptr = malloc(sizeof(char) * (str_len + 1));
if (ptr == NULL)
return (NULL);
else
{
while (i < str_len)
{
ptr[i] = str[i];
i++;
}
ptr[i] = '\0';
}
return (ptr);
}
