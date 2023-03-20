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
int x, h, vir, space;

vir = ',';
space = ' ';
for (x = '0'; x <= '9'; x++)
{
for (h = '0' + 1; h <= '9'; h++)
{
putchar(x);
putchar(h);
if (x == '8' && h =='9')
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
