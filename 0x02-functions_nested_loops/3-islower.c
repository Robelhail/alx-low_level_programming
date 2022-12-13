#include "main.h"


/**
 *_islower - check if character is lowercase
 * @c: it is the character to be checked
 * Return: (1) if character is lowercase else return(0).
 */

int _islower(int r)
{
if (r >= 'a' && r <= 'z')
return (1);
else
return (0);
}

