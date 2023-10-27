#include <stdio.h>

/**
 * main - main function.
 * @argc: integer represents arguments no.
 * @argv: array of strings of arguments given.
 * Return: 0 success & non-zero for failure.
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
