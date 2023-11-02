#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory
 * @nmemb: array elements number
 * @size: size in byte for each element
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;
unsigned int alloc_len = nmemb * size;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(alloc_len);
if (ptr == NULL)
return (NULL);
for (i = 0; i < alloc_len; i++)
ptr[i] = 0;
return (ptr);
}
