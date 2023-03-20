#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/**
 * main - A programe that print a random number
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int n,ld;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
ld = n % 10;
if (ld > 5)
{
printf("%d%d and is greater than 5\n", ld, n);
}
else if(ld == 0)
{
printf("%d%d and is 0\n", ld, n);
}
else
{
printf("%d%d and is less than 6 and not 0\n", ld, n);
}
return (0);
}
