#include "main.h"

/**
 * *_strcpy - copies thestring pointed to by src
 * including theterminating null byte (\0)
 * to the buffer pointed to bydest
 * @dest: pointer to the buffer inwhich we copythe string
 * @src: string to becopied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int leem, e;
leem = 0;
while (src[leem] != '\0')
{
leem++;
}
for (e = 0; e < leem; e++)
{
dest[e] = src[e];
}
dest[e] = '\0';
return (dest);
}
