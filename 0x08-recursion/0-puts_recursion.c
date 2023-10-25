#include "main.h"

/**
 * *_puts_recursion - printing string using recursion.
 * @s:  pointer to charcter.
 * Return: pointer to the memory address s.
 */

void _puts_recursion(char *s)
{
/*Base Case*/
if (*s == '\0')
{
_putchar('\n');
return;
}
/*Recursion*/
else
{
_putchar(*s); /*print charcter*/
_puts_recursion(s + 1); /*Increment pointer address by 1*/
}
}
