#include "main.h"

void print_to_98(int n)
{
if (n < 98)
{
while (n < 99)
{
if (n < 98 && n >= 10){
_putchar('0' + n / 10);
_putchar('0' + n % 10);
_putchar(',');
_putchar(' ');
}
else if (n < 10 && n >= 0){
_putchar('0' + n);
_putchar(',');
_putchar(' ');
}
else if (n < 0 && n >= -9){
_putchar('0' + n);
_putchar(',');
_putchar(' ');
}
else
{
_putchar('0' + n / 10);
_putchar('0' + n % 10);
_putchar(',');
_putchar(' ');
}
}
n++;
}  
else if (n > 98)
{
while (n > 98)
{
if (n >= 100)
{
_putchar(n / 100 + '0');
_putchar((n / 10) % 10 + '0');
_putchar(n % 10 + '0');
_putchar(',');
_putchar(' ');
}
else if (n >= 100 && n < 1000){
_putchar('0' + n / 10);
_putchar('0' + n % 10);
_putchar(',');
_putchar(' ');
}
}
n--;
}
else 
{
_putchar('0' + n / 10);
_putchar('0' + n % 10);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
