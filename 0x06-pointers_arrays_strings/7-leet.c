#include "main.h"

/**
 * *leet - encoding string.
 * @str_ptr:  pointer to string.
 * Return: Encoded string.
 */

char *leet(char *str_ptr)
{
int i;
char arr_chr[5] = {'a', 'o', 'e', 'l', 't'};
int  arr_num[5] = {'4', '0', '3', '1', '7'};
char *start_ptr = str_ptr;
while (*str_ptr != '\0')
{
char *ptr1 = arr_chr;
int *ptr2 = arr_num;
for (i = 0; i < 5; i++)
{
if (*str_ptr == *ptr1 || *str_ptr == (*ptr1 - 32))
{
*str_ptr = *ptr2;
break;
}
ptr1++;
ptr2++;
}
str_ptr++;
}
return (start_ptr);
}
