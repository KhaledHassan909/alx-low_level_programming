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
_putchar(str[0]);
for (; i < str_len; i = i + 2)
_putchar(str[i + 2]);
_putchar('\n');
}
