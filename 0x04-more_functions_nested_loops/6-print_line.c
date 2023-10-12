#include "main.h"

/**
 * print_line - print staright line
 * @n: number of times _ printed
 *
 * Return: None
 */
void print_line(int n)
{
int iter = 0;
if (n <= 0)
_putchar('\n');
while (iter < n)
{
if (n <= 0)
break;
else
_putchar('_');
iter++;
}
if (n != 0 && n > 0)
_putchar('\n');
}
