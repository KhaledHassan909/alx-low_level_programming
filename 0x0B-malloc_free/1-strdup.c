#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strduup - Makes copy if given string.
 * @str: string.
 * Return: pointer to duuplicated string.
 */
char *_strdup(char *str)
{
char *ptr;
int str_len = strlen(str);
int i = 0;
ptr = malloc(sizeof(char) * str_len);    
if (str_len ==0 || ptr == NULL)
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
