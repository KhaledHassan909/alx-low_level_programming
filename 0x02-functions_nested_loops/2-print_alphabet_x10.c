#include "main.h"

/**
* print_alphabet - void function
*
* Description: 'Printing lowercase alphabet x10'
*
* Return: Always 0 (Success)
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
