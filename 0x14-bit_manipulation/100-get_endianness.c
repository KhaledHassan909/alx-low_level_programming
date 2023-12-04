#include "main.h"

int get_endianness(void)
{
  unsigned int x = 1;
  char *p;
  p = (char *) &x;

  if(*p == 1)
    return(1);
  else
    return(0);
}
