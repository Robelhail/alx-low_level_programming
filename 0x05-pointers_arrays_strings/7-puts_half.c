#include "main.h"

/**
* puts_half - a function that prints half of a string
* if odd len, n = (length_of_the_string - 1) / 2
* @str: input
* Return: half of input
*/

void puts_half(char *str)
{
int a, r, lnz;

lnz = 0;

for (a = 0; str[a] != '\0'; a++)
lnz++;

r = (lnz / 2);

if ((lnz % 2) == 1)
r = ((lnz + 1) / 2);

for (a = r; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');
}
