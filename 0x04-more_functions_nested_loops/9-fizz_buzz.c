#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 If True
 */
int main(void)
{
int n = 101;
int i = 1;
while (i < n)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);
i++;
if (i != n)
printf(" ");
}
printf("\n");
return (0);
}
