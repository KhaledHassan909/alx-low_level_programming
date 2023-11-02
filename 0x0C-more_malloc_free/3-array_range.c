#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - array containg values from min to max
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to array of integers .
 */
int *array_range(int min, int max)
{
int *ptr, i;
int iter = min;
int alloc_len = (max - min) + 1;
if (min > max)
return (NULL);
ptr = malloc(sizeof(int) * alloc_len);
if (ptr == NULL)
return (NULL);
for (i = 0; i < alloc_len; i++)
{
ptr[i] = iter;
iter++;
}
return (ptr);
}
