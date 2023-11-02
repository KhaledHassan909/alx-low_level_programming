#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory for given size.
 * @b: size to be allocated.
 * Return: pointer to first address of allocated memory.
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
