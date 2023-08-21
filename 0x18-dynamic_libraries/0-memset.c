#include "main.h"

/**
 * *_memset - fills memry wih a consant byte
 * @s: memory area tobe filled
 * @b: char tocopy
 * @n: number of times to cpy b
 * Return: pointer to thememory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int e;
for (e = 0; e < n; e++)
{
s[e] = b;
}
return (s);
}
