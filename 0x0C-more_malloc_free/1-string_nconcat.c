#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concat s2 to s1.
 * @s1: string to concatenate.
 * @s2: string to be concatenated.
 * @n: size from s2 to be concatenated.
 * Return: Pointer to conatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int i, j = 0;
unsigned int alloc_len = 0;
unsigned int len_s1 = 0, len_s2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len_s1 = strlen(s1);
len_s2 = strlen(s2);
if (n >= len_s2)
alloc_len = len_s1 + len_s2 + 1;
else
alloc_len = len_s1 + n + 1;
ptr = malloc(alloc_len);
if (ptr == NULL)
return (NULL);
for (i = 0; i < alloc_len - 1; i++)
{
if (i < len_s1)
{
ptr[i] = s1[i];
}
else
{
ptr[i] = s2[j];
j++;
}
}
ptr[i] = '\0';
return (ptr);
}
