#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - main function.
 * @argc: integer represents arguments no.
 * @argv: array of strings of arguments given.
 * Return: 0 success & non-zero for failure.
 */
int main(int argc, char *argv[])
{
int mul = 1;
int i;
for (i = 1; i < argc; i++)
{
if (argc < 3)
break;
else
{
mul *= atoi(argv[i]);
}
}
if (mul != 1)
printf("%d\n", mul);
else
printf("ERROR\n");
return (0);
}
