#include "main.h"

/**
 * _strncpy - copies astring
 * @dest: destinationstring
 * @src: source string
 * @n: number of bytesto copy
 * Return: pointer to theresulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
int e;
e = 0;
while (src[e] != '\0' && e < n)
{
dest[e] = src[e];
e++;
}
while (e < n)
{
dest[e] = '\0';
e++;
}
return (dest);
}
