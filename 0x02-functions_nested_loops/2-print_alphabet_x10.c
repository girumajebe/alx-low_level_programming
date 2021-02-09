#include "holberton.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
int n, g;

g = 0;

while (g < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
g++;
_putchar('\n');
}
}
