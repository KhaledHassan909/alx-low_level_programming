#include "main.h"
#include <string.h>
/* #include <stdio.h> */

/**
 * puts2 - printing every other char of string
 * @str: input string
 */
void puts2(char *str)
{
int i = 0;
int str_len = strlen(str);
for (; i < str_len; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
