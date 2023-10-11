#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet x10
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
char c;
int n;
n = 0;
while (n < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
n++;
_putchar('\n');
}
}
