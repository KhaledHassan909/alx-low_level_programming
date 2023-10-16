#include "main.h"
#include <string.h>

/**
 * rev_string - Printing string in reverse order.
 * @s: Pointer to string.
 */
void rev_string(char *s)
{
char rev_s[200];
int i = strlen(s) - 1;
for (; i >= 0; i--)
rev_s[strlen(s) - 1 - i] = s[i];
strcpy(s, rev_s);
}
