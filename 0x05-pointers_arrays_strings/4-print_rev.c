#include "main.h"
/**
* print_rev - prints a string, in reverse
* @s: string
* return: 0
*/
void print_rev(char *s)
{
int lnz = 0;
int o;

while (*s != '\0')
{
lnz++;
s++;
}
s--;
for (o = lnz; o > 0; o--)
{
_putchar(*s);
s--;
}

_putchar('\n');
}

