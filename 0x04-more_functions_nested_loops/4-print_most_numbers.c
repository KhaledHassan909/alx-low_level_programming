#include "main.h"

/**
 * print_most_numbers - print numers 0-9 except 2 & 4
 *
 * Return: None
 */
void print_most_numbers(void)
{
int n = 0;
while (n <= 9)
{
if (n == 2 || n == 4)
{
n++;
continue;
}
else
{
_putchar('0' + n);
n++;
}
}
_putchar('\n');
}
