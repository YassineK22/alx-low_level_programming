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
int x, space, virgule;

space = ' ';
virgule = ',';
for (x = '0'; x <= '9'; x++)
{
putchar(x);
if (x == '9')
{
continue;
}
putchar(virgule);
putchar(space);
}
putchar('\n');
return (0);
}
