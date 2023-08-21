#include "main.h"

/**
 * *_memcpy - copiesmemory area
 * @dest: destination memoryarea
 * @src: memory area tocopy from
 * @n: number ofbytes tocopy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int e;
for (e = 0; e < n; e++)
{
dest[e] = src[e];
}
return (dest);
}
