#include "main.h"
#include <string.h>


/**
 * puts_half - Prints half of a string.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
int str_len = strlen(str);
int i;
if ((str_len % 2) == 0)
{
i = str_len / 2;
for (; i < str_len; i++)
_putchar(str[i]);
}
else
{
i = (str_len - 1) / 2;
for (; i < (str_len - 1); i++)
_putchar(str[i]);
}
_putchar('\n');
}
