#include "main.h"

/**
 * helper - helper function for palindrome.
 * @s:  string given.
 * @start:  start of string.
 * @end:  end of string.
 * Return: 1 if palindrome 0 if not.
 */
int helper(char *s, int start, int end)
{
if (start >= end)
return (1);
else if (s[start] != s[end])
return (0);
else
return (helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - checking if string is palindrome.
 * @s:  string given.
 * Return: helper function.
 */
int is_palindrome(char *s)
{
int length = _strlen(s) - 1;
return (helper(s, 0, length));
}
