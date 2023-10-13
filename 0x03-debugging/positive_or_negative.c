#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
* positive_or_negative - Check +ve or -ve
*
* @n: number to be checked
*
* Description: 'Positive,Negative or Zero'
*
* Return: None
*/
void positive_or_negative(int n)
{
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
}
