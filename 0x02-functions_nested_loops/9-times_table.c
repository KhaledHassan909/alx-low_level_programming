#include "main.h"

/**
 * times_table - prints time table
 *
 * Return: None
 */
void times_table(void)
{
int i = 0;
int j;
int prod;
while (i < 10)
{
j = 0;
while (j < 10)
{
prod = i * j;
if (prod >= 10)
{
_putchar('0' + prod / 10);
_putchar('0' + prod % 10);
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar('0' + prod);
if (j != 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
j++;
}
i++;
_putchar('\n');
}
}
