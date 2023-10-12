#include "main.h"

/**
 * print_square - drawing square
 * @size: square size
 *
 * Return: None
 */
void print_square(int size)
{
int col;
int row = 0;
if (size <= 0)
_putchar('\n');
while (row < size)
{
col = 0;
{
while (col < size)
{
_putchar('#');
col++;
}
_putchar('\n');
row++;
}
}
}
