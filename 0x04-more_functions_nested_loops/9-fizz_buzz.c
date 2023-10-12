#include <stdio.h>

/**
 * fizz_buzz - fizz buzz program
 * @n: iteration number
 *
 * Return: None
 */
void fizz_buzz(int n)
{
int i = 1;
while (i <= n)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz ");
else if (i % 3 == 0)
printf("Fizz ");
else if (i % 5 == 0)
printf("Buzz ");
else
printf("%d ", i);
i++;
}
printf("\n");
}

/**
 * main - main function
 *
 * Return: 0 If True
 */
int main(void)
{
fizz_buzz(100);
return (0);
}
