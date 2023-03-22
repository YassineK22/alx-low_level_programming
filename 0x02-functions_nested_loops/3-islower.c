#include "main.h"

/**
 * _islower - check if the char is lower
 * @c: The character to be cheked
 * Return:  1 for lower or 0 for anything
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
