#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: 1st string.
 * @s2: 2nd string.
 * Return: Concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0;
int str1_len = 0, str2_len = 0, concat_len = 0;
char *ptr1;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
str1_len = strlen(s1);
str2_len = strlen(s2);
concat_len = str1_len + str2_len + 1;
ptr1 = malloc(sizeof(char) * concat_len);
if (ptr1 == NULL)
return (NULL);
while (i < concat_len)
{
if (i < str1_len)
{
ptr1[i] = s1[i];
i++;
}
else
{
ptr1[i] = s2[j];
j++;
i++;
}
}
return (ptr1);
}
