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
int x, y, z, vir, space;

vir = ',';
space = ' ';
for (x = '0'; x < '8'; x++)
{
for (y = x + 1; y < '9'; y++)
{
for (z = y + 1; z <= '9'; z++)
{
putchar(x);
putchar(y);
putchar(z);
if (x == '7' && y == '8' && z == '9')
{
continue;
}
putchar(vir);
putchar(space);
}
}
}
putchar('\n');
return (0);
}
