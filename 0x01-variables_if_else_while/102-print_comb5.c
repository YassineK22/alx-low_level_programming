#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/**
 * main - A programe that print the signe of the number
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int x, y, vir, space;

vir = ',';
space = ' ';
for (x = 0; x <= 98; x++)
{
for (y = x + 1; y <= 99; y++)
{
putchar('0' + (x / 10));
putchar('0' + (x % 10));
putchar(space);
putchar('0' + (y / 10));
putchar('0' + (y % 10));
if (x == 98 && y == 99)
{
continue;
}
putchar(vir);
putchar(space);
}
}
putchar('\n');
return (0);
}
