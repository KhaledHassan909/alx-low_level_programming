#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function.
 * @argc: integer represents arguments no.
 * @argv: array of strings of arguments given.
 * Return: 0 success & non-zero for failure.
 */
int main(int argc, char *argv[])
{
int arr[] = {25, 10, 5, 2, 1};
int len = sizeof(arr) / sizeof(arr[0]);
int amount;
int i, count = 0;
if (argc < 2)
{
printf("ERROR\n");
return (1);
}
amount = atoi(argv[1]);
for (i = 0; i < len; i++)
{
while (amount >= arr[i])
{
amount -= arr[i];
count++;
}
}
printf("%d\n", count);
return (0);
}
