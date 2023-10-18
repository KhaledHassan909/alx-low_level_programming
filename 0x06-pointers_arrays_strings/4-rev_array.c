#include "main.h"

/**
 * *reverse_array - Reverse a given array.
 * @a: array of integers.
 * @n:  length of array.
 * Return: None.
 */
void reverse_array(int *a, int n)
{
int a_rev[100];
int *ptr = a + n - 1;
int i;
for (i = 0; i < n; i++)
{
a_rev[i] = *ptr;
if (&a[0] != ptr)
ptr--;
else
break;
}
for (i = 0; i < n; i++)
{
a[i] = a_rev[i];
}
}
