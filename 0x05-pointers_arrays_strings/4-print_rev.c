#include "main.h"
#include <string.h>
/*#include <stdio.h>*/

/**
 * print_rev - Printing string in reverse order.
 * @s: Pointer to string.
 */
void print_rev(char *s)
{
int i = strlen(s);
for (; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
