#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - printing sum of square matrix diagonals.
 * @a:  sqaure matrix.
 * @size:  matrix size.
 * Return: None.
 */

void print_diagsums(int *a, int size)
{
int i, j;
int sum = 0;
int sum1 = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
sum += *((a + i * size) + j);
if (j == size - 1 - i)
sum1 += *((a + i * size) + j);
}
}
printf("%d, %d\n", sum, sum1);
}
