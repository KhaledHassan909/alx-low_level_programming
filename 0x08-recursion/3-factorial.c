#include "main.h"

/**
 * factorial - calculate factorial of number.
 * @n:  given number.
 * Return: factorial value.
 */
int factorial(int n)
{
if (n == 1)
return (1);
else if (n < 0)
return (-1);
else
return (n * factorial(n - 1));
}
