/*
 * File: 2-print_alphabet_x10.c
 */

#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
int count;
char 1; 

for (count = 0; count <= 9; count++)
{
for (l = 'a'; l <= 'z'; l++)
_putchar(l);
_putchar('\n');
}
}
