#include <stdio.h>

/**
 * main - main function.
 * @argc: integer represents arguments no.
 * @argv: array of strings of arguments given.
 * Return: 0 success & non-zero for failure.
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
