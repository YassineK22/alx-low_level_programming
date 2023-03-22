#include "main.h"

/**
 * print_alphabet_x10 - print all alphaptif 10 times
 *
 * Return - void
 */

void print_alphabet_x10(void)
{
char ch;
int n;

for (n = 0; n < 10; n++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
