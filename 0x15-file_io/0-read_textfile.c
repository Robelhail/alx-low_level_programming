#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Read text file print to STDOUT.
* @filename: text file being read
* @letters: number of letters to be read
* Return: w- actual number of bytes read and printed
* 0 when function fails or filename is NULL.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
char *rob;
ssize_t ti;
ssize_t y;
ssize_t s;

ti = open(filename, O_RDONLY);
if (ti == -1)
return (0);
rob = malloc(sizeof(char) * letters);
s = read(ti, rob, letters);
y = write(STDOUT_FILENO, rob, s);

free(rob);
close(ti);
return (y);
}
