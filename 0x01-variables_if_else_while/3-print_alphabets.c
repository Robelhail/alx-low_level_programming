#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;

char A;

for (a = 'a'; a <= 'z'; a++)
for (A = 'A'; A <= 'Z'; a++)

{
if (a != '1' && a != '0')
putchar(a);
putchar(A);
}

putchar('\n');
return (0); }               
