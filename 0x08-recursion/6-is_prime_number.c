#include "main.h"

/**
 * prime_helper - Checking if number is prime.
 * @n:  number given
 * @i:  incermented num.
 * Return: 1 if prime 0 if not.
 */
int prime_helper(int n, int i)
{
if (i >= n)
return (1);
else if (n % i == 0)
return (0);
else
return (prime_helper(n, i + 1));
}

/**
 * is_prime_number - Checking if number is prime.
 * @n:  number given
 * Return: 1 if prime 0 if not.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else
return (prime_helper(n, 2));
}
