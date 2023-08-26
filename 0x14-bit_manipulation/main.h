#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int num, unsigned int ind);
int set_bit(unsigned long int *number, unsigned int position);
int clear_bit(unsigned long int *num, unsigned int position);
unsigned int flip_bits(unsigned long int firstnumber, unsigned long int secnum);

#endif /* MAIN_H */
