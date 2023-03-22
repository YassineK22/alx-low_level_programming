#include "main.h"

/**
 * _isalpha - check if the char is alphabetic
 * @c: The character to be cheked
 * Return:  1 for alphabetic or 0 for anything
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 97))
{
return (1);
}
return (0);
}
