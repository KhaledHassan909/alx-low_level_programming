#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int char_to_int(char c);
int _strlen(const char *str);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);

#endif
