#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
* main - Entry point
*
* Description: 'Greater or less than Zero'
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int last_digit;
last_digit = n%10; 
if (last_digit > 5)
printf("%d is greater than 5\n", last_digit);
else if (last_digit < 6)
printf("%d is less than 6 and not 0\n", last_digit);
else
printf("%d is 0\n", last_digit);
return (0);
}
