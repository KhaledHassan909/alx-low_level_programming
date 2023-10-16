#include "main.h"
#include <string.h>

void puts2(char *str)
{
int i = 0;
int str_len = strlen(str);
_putchar(str[0]);
for(; i < str_len; i=i+2)
_putchar(str[i+2]);
_putchar('\n');
}
