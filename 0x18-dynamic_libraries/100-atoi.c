#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: string to be converted
*
* Return: the int converted from the string
*/
int _atoi(char *s)
{
int r, y, n, len, m, digit;

r = 0;
y = 0;
n = 0;
len = 0;
m = 0;
digit = 0;

while (s[len] != '\0')
len++;

while (r < len && m == 0)
{
if (s[r] == '-')
++y;

if (s[r] >= '0' && s[r] <= '9')
{
digit = s[r] - '0';
if (y % 2)
digit = -digit;
n = n * 10 + digit;
m = 1;
if (s[r + 1] < '0' || s[r + 1] > '9')
break;
m = 0;
}
r++;
}

if (m == 0)
return (0);

return (n);
}
