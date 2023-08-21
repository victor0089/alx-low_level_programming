#include "main.h"

/**
 * _strncat - concatenates n bytes fromstring toanother
 * @dest: destination sting
 * @src: sourcestring
 * @n: number of bytes oftrtoconcatenate
 * Return: a pointer to theresulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int e, y;
e = 0;
y = 0;
while (dest[e] != '\0')
e++;
while (src[y] != '\0' && y < n)
{
dest[e] = src[y];
e++;
y++;
}
dest[e] = '\0';
return (dest);
}
