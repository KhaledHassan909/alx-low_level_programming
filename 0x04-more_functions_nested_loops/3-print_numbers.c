#include "main.h"

/**
 * print_numbers - print numers 0-9
 *
 * Return: None
 */
void print_numbers(void)
{
int n = 0;
while (n <= 9)
{
_putchar('0' + n);
_putchar('\n');
n++;
}
}
