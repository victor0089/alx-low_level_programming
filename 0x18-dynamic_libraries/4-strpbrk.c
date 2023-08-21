#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches astring forany of aset ofbytes
 * @s: string to search
 * @accept: stringcontaining thebytes tolook for
 * Return: pointer to thebyte in s thatmatches one of thebytes inaccept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int e, y;
for (e = 0; *s != '\0'; e++)
{
for (y = 0; accept[y] != '\0'; y++)
{
if (*s == accept[y])
{
return (s);
}
}
s++;
}
return (NULL);
}
