#include "main.h"

/**
 * _strcat - concatenates twostrings
 * @dest: string toappendt
 * @src: string to add
 * Return: a pointer to theresulting string
 */
char *_strcat(char *dest, char *src)
{
int e, y;
e = 0;
y = 0;
while (dest[e] != '\0')
e++;
while (src[y] != '\0')
{
dest[e] = src[y];
y++;
e++;
}
dest[e] = '\0';
return (dest);
}
