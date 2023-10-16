#include "main.h"
#include <string.h>

/**
 * rev_string - Printing string in reverse order.
 * @s: Pointer to string.
 */
void rev_string(char *s)
{
int arr_length = strlen(s);
int i;
char t;
for (i = 0; i < arr_length / 2; i++)
{
t = s[i];
s[i] = s[strlen(s) - i - 1];
s[strlen(s) - i - 1] = t;
}
}
