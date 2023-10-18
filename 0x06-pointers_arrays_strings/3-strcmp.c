#include "main.h"

/**
 * *_strcmp - comparing 2 strings.
 * @s1:  1st string to be compared.
 * @s2:  2nd string to be compared.
 * Return: int.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
if (i < j)
return (-15);
else if (i > j)
return (15);
else
return (0);
}
