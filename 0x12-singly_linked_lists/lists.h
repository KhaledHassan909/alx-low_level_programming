#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

typedef struct list_t
{
    char *str;
    int len;
    struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif
