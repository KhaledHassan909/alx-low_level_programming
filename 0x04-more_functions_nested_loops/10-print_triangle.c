# include "main.h"

/**
 * print_triangle - printing right angle triangle
 * @size: triangle size
 *
 * Return: None
 */
void print_triangle(int size)
{
int rowno = 1;
int space;
int symbol;
if (size <= 0)
_putchar('\n');
while (rowno <= size)
{
space = 1;
while (space <= (size - rowno))
{
_putchar(' ');
space++;
}
symbol = 1;
while (symbol <= rowno)
{
_putchar('#');
symbol++;
}
_putchar('\n');
rowno++;
}
}
