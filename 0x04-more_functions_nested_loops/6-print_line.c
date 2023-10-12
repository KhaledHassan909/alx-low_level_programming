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
while (iter <= n)
{
if (n <= 0)
{
_putchar('\n');
break;
}
else
_putchar('_');
iter++;
}
_putchar('\n');
}
