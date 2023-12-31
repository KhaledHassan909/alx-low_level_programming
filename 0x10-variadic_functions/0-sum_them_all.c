#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all arguments
 * @n: number of arguments
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}

	va_end(args);

	return (sum);
}
