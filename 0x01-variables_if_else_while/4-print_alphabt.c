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
int x;

for (x = 'a'; x <= 'z'; x++)
{
if (x == 'e' || x == 'q'){
continue;
}
putchar(x);
}
putchar('\n');
return (0);
}
