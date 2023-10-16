#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of array of integers.
 * @a: Array of integers.
 * @n: Length of array.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
else
break;
}
printf("\n");
}
