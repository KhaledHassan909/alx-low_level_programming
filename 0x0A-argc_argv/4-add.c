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
int add = 0;
int i, j;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("ERROR\n");
return (1);
}
}
add += atoi(argv[i]);
}
printf("%d\n", add);
return (0);
}
