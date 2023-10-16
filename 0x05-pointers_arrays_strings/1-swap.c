#include "main.h"

/**
 * swap_int - Change the value of an integer to 98.
 * @a: 1st integer to be swaped.
 * @b: 2nd integer to be swaped.
 */
void swap_int(int *a, int *b)
{
int tmp;  /* temproral variable */
tmp = *a; /* temproral variable holds value of *a */
*a = *b;  /* assigning value of *b in *a */
*b = tmp; /* assiginig value of *a in *b */
}


