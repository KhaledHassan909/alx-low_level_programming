#include <stdio.h>

/**
* main - Entry point
*
* Description: 'Positive,Negative or Zero'
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
n = 0;
while (n <= 9)
{
putchar(n % 10 + '0');
if (n == 9)
{
break;
}
putchar(',');
putchar(' ');
n++;
}
putchar('\n');
return (0);
}
