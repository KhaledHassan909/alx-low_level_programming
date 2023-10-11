#include "main.h"

/**
* main - Entry point
*
* Description: 'Printing _putchar'
*
* Return: Always 0 (Success)
*/
int main(void)
{
print_alphabet();
return (0);
}

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
