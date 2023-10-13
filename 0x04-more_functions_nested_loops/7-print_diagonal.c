#include "main.h"


/**
 * print_diagonal - printing diagonal
 * @n: Diagonal size
 *
 * Return: None
 */
void print_diagonal(int n)
{
int row = 1;
int symbol = 1;
int space;
if (n <= 0)
_putchar('\n');
while (row <= n)
{
space = 1;
while (space <= (row - symbol))
{
_putchar(' ');
space++;
}
_putchar('\\');
_putchar('\n');
row++;
}
}
