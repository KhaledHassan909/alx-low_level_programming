#include "main.h"
#include <stdlib.h>


/**
 * create_array - create array of specifc chars
 * @size: the size of the memory to print
 * @c: specific charcter
 *
 * Return: Pointer to array.
 */

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i = 0;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
else
while (i < size)
{
str[i] = c;
i++;
}
return (str);
}
