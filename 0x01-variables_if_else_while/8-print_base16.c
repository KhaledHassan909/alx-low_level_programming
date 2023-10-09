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
char c;
n = 0;
c = 'a';
while (n < 10)
{
putchar(n % 10 + '0');
n++;
}
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
