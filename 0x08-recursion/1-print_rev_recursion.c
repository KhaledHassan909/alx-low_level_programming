#include "main.h"

/**
 * *_print_rev_recursion - printing reversed string.
 * @s:  pointer to charcter.
 * Return: reversed string.
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
else
{
return;
_putchar('\n');
}
}
