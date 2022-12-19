#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - program that generates random valid
* passwords for the program 101-crackme
*
* Return: Always 0 (Success)
*/

int main(void)
{
int pass[100];
int r, sum, y;

sum = 0;	

srand(time(NULL));

for (r = 0; r < 100; r++)
{
pass[r] = rand() % 78;
sum += (pass[r] + '0');
putchar(pass[r] + '0');
if ((2772 - sum) - '0' < 78)
{
n = 2772 - sum - '0';
sum += y;
putchar(y + '0');
break;
}
}

return (0);
}
