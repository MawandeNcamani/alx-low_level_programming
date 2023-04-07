#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *y);
void print_binary(unsigned long int num);
int get_bit(unsigned long int num, unsigned int index);
int set_bit(unsigned long int *num, unsigned int index);
int clear_bit(unsigned long int *num, unsigned int index);
unsigned int flip_bits(unsigned long int num, unsigned long int m);
int get_endianness(void);

#endif /* MAIN_H */
