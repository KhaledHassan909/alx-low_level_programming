#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocating 2D array of integers
 * @width: width of 2D array
 * @height: height of 2D array
 *
 * Return: pointer to 2D array of integers.
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **ptr;
if (width <= 0 || height <= 0)
return (NULL);
ptr = (int **)malloc(sizeof(int *) * height);
if (ptr == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
ptr[i] = (int *)malloc(sizeof(int) * width);
if (ptr[i] == NULL)
{
for (j = 0; j < i; j++)
free(ptr[j]);
free(ptr);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
ptr[i][j] = 0;
}
return (ptr);
}
