#include "main.h"

/**
* print_alphabet - void function
*
* Description: 'Printing lowercase alphabet'
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char c;
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
