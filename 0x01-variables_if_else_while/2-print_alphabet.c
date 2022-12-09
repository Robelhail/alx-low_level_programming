#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
if (a != '1' && a != '0')
putchar(a);
}
putchar('\n');
return (0);
}
